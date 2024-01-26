import json

with open("student.json","r+") as fd:
	data = fd.read()
	print(data)
	print(type(data))
	std = json.loads(data) 	#converting to dictionary

	print(std)
	print(type(std))
	std={"name":"Siddhant","prn":"23234"}
	std["New Data"]=temp
	print(std)
	str_data=json.dumps(std)	#converting to dictionary to JSON

	print(str_data)
	print(type(str_data))
	fd.write(str_datas)	
