#4Write a python code to take string input from user and remove duplicate words.

dic={}
std=[]
ch=input("Enter the string = ")
a=ch.split(" ")
x=lambda i: i
for i in a:
	dic[i]=x(i)
std=dic.keys()
print(std)

