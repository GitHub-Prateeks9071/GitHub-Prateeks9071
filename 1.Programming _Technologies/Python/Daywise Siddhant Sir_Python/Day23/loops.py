#Loops

i=0
add=0
while i < 101:
	if i%2 != 0:
		add = add + i
	i = i + 1
print(add)

add=0
for i in range(1,101,2):
		print(i)
		add = add + i
print(add)

