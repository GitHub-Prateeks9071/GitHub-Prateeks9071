#1.Perform addition of all numbers in the string

ch=input("Enter the String = ")
x=lambda ch : ch[:]==ch[::-1]
a=x(ch)
if(ch==a):
	print("This word is palindrom")
else:
	print("This is not palindrom")
