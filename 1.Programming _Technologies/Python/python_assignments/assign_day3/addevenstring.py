#Addition of all even Strings

num = "5,2,3,9,5,6,11,8,9"
lst=num.split(",")
add=0
i=0
for i in lst:
	if(int(i)%2==0):
		add=add+int(i)
print(add)

