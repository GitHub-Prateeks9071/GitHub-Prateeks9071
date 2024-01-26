import requests
import time
                # data to be send on Thinksspeak 
url= "https://api.thingspeak.com/update"
def sendData(body):
    result = requests.post(url,data=body)
        # output 
    print(result)
    print("STATUS CODE: ",result.status_code)

temp=int(30)
humi=int(87)

while True:

    time.sleep(5)       # delay of 5 minutes
    body={
        "api_key" : "G0E1CVCSYU4BKIU0",
        "temperature" : 30,
        "humidity" : 87,
        "place" : "diot-classroom",
        "developer" : "220340126031"
    }
        # value of temperature and humidity will increase by 1
        temperature = temperature + 1     
        humidity = humidity + 1
        sendData(body)