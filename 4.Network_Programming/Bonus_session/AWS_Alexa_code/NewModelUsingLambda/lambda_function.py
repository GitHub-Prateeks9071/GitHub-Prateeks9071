# -*- coding: utf-8 -*-

# This sample demonstrates handling intents from an Alexa skill using the Alexa Skills Kit SDK for Python.
# Please visit https://alexa.design/cookbook for additional examples on implementing slots, dialog management,
# session persistence, api calls, and more.
# This sample is built using the handler classes approach in skill builder.
import logging
import ask_sdk_core.utils as ask_utils
import boto3
import json


from ask_sdk_core.skill_builder import SkillBuilder
from ask_sdk_core.dispatch_components import AbstractRequestHandler
from ask_sdk_core.dispatch_components import AbstractExceptionHandler
from ask_sdk_core.handler_input import HandlerInput

from ask_sdk_model import Response

logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)


class LaunchRequestHandler(AbstractRequestHandler):
    """Handler for Skill Launch."""
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool

        return ask_utils.is_request_type("LaunchRequest")(handler_input)

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response
        speak_output = "Welcome to Sensor Controller, you can say turn switch on or off or you can ask what is current temperature or humidity. Which would you like to try?"

        return (
            handler_input.response_builder
                .speak(speak_output)
                .ask(speak_output)
                .response
        )


class SwitchManagerIntentHandler(AbstractRequestHandler):
    """Handler for Switch Manager Intent."""
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool
        return ask_utils.is_intent_name("SwitchManagerIntent")(handler_input)

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response
        slots = handler_input.request_envelope.request.intent.slots
        
        switch_state1 = slots["Switch_State"].value
        
        client = boto3.client('iot-data')
        
        if (switch_state1 == 'on'):
            raw_payload = b'{"state": {"desired": {"switch": "on"}}}'
            res = client.update_thing_shadow(thingName='IotClass1', payload=raw_payload)
        else :
            raw_payload = b'{"state": {"desired": {"switch": "off"}}}'
            res = client.update_thing_shadow(thingName='IotClass1', payload=raw_payload)
            
            
        speak_output = 'Turning Switch {switch_state1}'.format(switch_state1=switch_state1)
        return (
            handler_input.response_builder
                .speak(speak_output)
                #.ask("You can also ask, What is the Temperature or Humiditiy.")
                .response
        )


class SensorManagerIntentHandler(AbstractRequestHandler):
    """Handler for Sensor Manager Intent."""
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool
        return ask_utils.is_intent_name("SensorManagerIntent")(handler_input)

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response
        client = boto3.client('iot-data')
        response1 = client.get_thing_shadow(thingName='IotClass1')
        payload = json.loads(response1["payload"].read())
        
        #print ("response_payload: {}".format(response_payload))
        #print(payload["state"]["desired"]["temperature"])
        rx_temp=payload["state"]["reported"]["temperature"]
        rx_humi=payload["state"]["reported"]["humidity"]
        slots = handler_input.request_envelope.request.intent.slots
        sensor_state1=slots["Sensor_Values"].value
        print('## DEBUG VARIABLES')
        print(sensor_state1)
       
        if (sensor_state1 == 'temperature'):
            speak_output = 'The current {sensor_state1} is {temp} degree celcius'.format(sensor_state1=sensor_state1,temp=rx_temp) 
        else :
            speak_output = 'The current {sensor_state1} is {temp} percent'.format(sensor_state1=sensor_state1,temp=rx_humi)  
        
        
            
        
        return (
            handler_input.response_builder
                .speak(speak_output)
                #.ask("You can also ask, Turn the Switch ON or OFF.")
                .response
        )


class HelpIntentHandler(AbstractRequestHandler):
    """Handler for Help Intent."""
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool
        return ask_utils.is_intent_name("AMAZON.HelpIntent")(handler_input)

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response
        speak_output = "You can say hello to me! How can I help?"

        return (
            handler_input.response_builder
                .speak(speak_output)
                .ask(speak_output)
                .response
        )


class CancelOrStopIntentHandler(AbstractRequestHandler):
    """Single handler for Cancel and Stop Intent."""
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool
        return (ask_utils.is_intent_name("AMAZON.CancelIntent")(handler_input) or
                ask_utils.is_intent_name("AMAZON.StopIntent")(handler_input))

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response
        speak_output = "Goodbye!"

        return (
            handler_input.response_builder
                .speak(speak_output)
                .response
        )


class SessionEndedRequestHandler(AbstractRequestHandler):
    """Handler for Session End."""
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool
        return ask_utils.is_request_type("SessionEndedRequest")(handler_input)

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response

        # Any cleanup logic goes here.

        return handler_input.response_builder.response


class IntentReflectorHandler(AbstractRequestHandler):
    """The intent reflector is used for interaction model testing and debugging.
    It will simply repeat the intent the user said. You can create custom handlers
    for your intents by defining them above, then also adding them to the request
    handler chain below.
    """
    def can_handle(self, handler_input):
        # type: (HandlerInput) -> bool
        return ask_utils.is_request_type("IntentRequest")(handler_input)

    def handle(self, handler_input):
        # type: (HandlerInput) -> Response
        intent_name = ask_utils.get_intent_name(handler_input)
        speak_output = "You just triggered " + intent_name + "."

        return (
            handler_input.response_builder
                .speak(speak_output)
                # .ask("add a reprompt if you want to keep the session open for the user to respond")
                .response
        )


class CatchAllExceptionHandler(AbstractExceptionHandler):
    """Generic error handling to capture any syntax or routing errors. If you receive an error
    stating the request handler chain is not found, you have not implemented a handler for
    the intent being invoked or included it in the skill builder below.
    """
    def can_handle(self, handler_input, exception):
        # type: (HandlerInput, Exception) -> bool
        return True

    def handle(self, handler_input, exception):
        # type: (HandlerInput, Exception) -> Response
        logger.error(exception, exc_info=True)

        speak_output = "Sorry, I had trouble doing what you asked. Please try again."

        return (
            handler_input.response_builder
                .speak(speak_output)
                .ask(speak_output)
                .response
        )

# The SkillBuilder object acts as the entry point for your skill, routing all request and response
# payloads to the handlers above. Make sure any new handlers or interceptors you've
# defined are included below. The order matters - they're processed top to bottom.


sb = SkillBuilder()

sb.add_request_handler(LaunchRequestHandler())
#for Reading Temperature and humidity
sb.add_request_handler(SensorManagerIntentHandler())
#for updating switch state
sb.add_request_handler(SwitchManagerIntentHandler())
sb.add_request_handler(HelpIntentHandler())
sb.add_request_handler(CancelOrStopIntentHandler())
sb.add_request_handler(SessionEndedRequestHandler())
sb.add_request_handler(IntentReflectorHandler()) # make sure IntentReflectorHandler is last so it doesn't override your custom intent handlers

sb.add_exception_handler(CatchAllExceptionHandler())

lambda_handler = sb.lambda_handler()