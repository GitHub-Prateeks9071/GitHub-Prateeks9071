#creating sub string

data = """The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""


substring = input("Enter the substring : \n")			#input substring
rdx = data.find(substring)
if(rdx !=-1):

	temp=data[rdx:rdx+6]
	print(temp.upper())
else:
	print("String is not present")



