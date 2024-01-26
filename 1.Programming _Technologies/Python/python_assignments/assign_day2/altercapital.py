data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""

print(data)
words=data.split()
for i in range(0,len(words),2):
	words[i]=words[i].upper()
print("\n")
print(words)
print("\n")
print(" ".join(words))
