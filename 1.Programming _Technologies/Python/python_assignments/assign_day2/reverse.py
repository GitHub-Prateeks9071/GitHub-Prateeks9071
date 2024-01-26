#7.Write a code to reverse every word of a paragraph

#data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""
#print(data)
#print("\n")
#str2=data[::-1]
#print(str2)




data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""
print(data)
print("\n")
str2=data.split(" ")
i=0
for i in range(0,len(str2)):
	str2[i]=str2[i][::-1]
	i=i+1
print(str2)
data=" ".join(str2)
print("\n")
print(data)

