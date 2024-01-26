#identifying palindrome number

num1=int(input("Enter the number"))

if(str(num1)==str(num1)[::-1]):
	print("It is a palindrome number")
else:
	print("It is not a palindrome number")

