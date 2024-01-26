# checking palindrome string

string=input("Enter the string\n")
string1 =string[::-1]
if(string1==string):
	print("It is a palindrome string")
else:
	print("It is not palindrome string")
