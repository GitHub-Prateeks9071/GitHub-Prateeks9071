import paho.mqtt.client as mqtt
topic_name_1 = "os/loadavg/1min"
topic_name_2 = "os/loadavg/5min"
topic_name_3 = "os/loadavg/15min"
qos = 1
def on_connect(client, userdata, flags, rc):
    print("Connected with result code "+str(rc))
    client.subscribe(topic_name_1,qos)
    client.subscribe(topic_name_2,qos)
    client.subscribe(topic_name_3,qos)
def on_message(client, userdata, msg):
    if(msg.topic == topic_name):
        print("Subscibed to topic %s " % (msg.topic))
        print("Message received %s" % (msg.payload.decode()))
        file = open("loadavg1min.txt", "w+")
        file.write(msg.payload.decode())
    elif(msg.topic == temp_topic):
        print("Subscibed to topic %s " % (msg.topic))
        print("Message received %s" % (msg.payload.decode()))
        file = open("loadavg5min.txt", "w+")
        file.write(msg.payload.decode())
    elif(msg.topic == humi_topic):
        print("Subscibed to topic %s " % (msg.topic))
        print("Message received %s" % (msg.payload.decode()))
        file = open("loadavg15min.txt", "w+")
        file.write(msg.payload.decode())
    else:
       print("topic based filtering is applied");

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect("localhost", 1883, 60)
client.loop_forever()