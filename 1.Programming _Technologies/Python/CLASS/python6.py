print("[1]Add")
print("[2]Substract")

ch= int(input("Enter a choice : "))
a= int(input("Enter the value of a"))
b= int(input("Enter the value of b"))

if (ch==1):
	print(a+b)
elif (ch==2):
	print(a-b)
elif (ch==3):
	print(a*b)
else:
	print("Wrong input")
