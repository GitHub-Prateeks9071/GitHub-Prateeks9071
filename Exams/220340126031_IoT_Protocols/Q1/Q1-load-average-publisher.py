import time
import paho.mqtt.client as mqtt
import os
broker_addr = "localhost"
port = 1883
keepalive = 60
client = mqtt.Client()
client.connect(broker_addr,port,keepalive)
payload = os.system("uptime | cut -d \",\" -f 4")
payload1 = os.system("uptime | cut -d \",\" -f 5")
payload2 = os.system("uptime | cut -d \",\" -f 6")
topic_name_1 = "os/loadavg/1min"
topic_name_2 = "os/loadavg/5min"
topic_name_3 = "os/loadavg/15min"
client.publish(topic_name_1,payload1)
client.publish(topic_name_2,payload2)
client.publish(topic_name_3,payload3)
print("Published")