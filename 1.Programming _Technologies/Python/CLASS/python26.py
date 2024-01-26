t=()# immutables
# can store any kind of data

t=("prateek","1",1,324.412)

# printing tupple

print(t)

#length of tupple
print("t[0]: ",t[0])
print("t[1]: ",t[1])
print("t[-1]: ",t[-1])

#Modify value

# t[1]=2434434422	#impossible

#tuple slicing
print("t[0:1] -> ",t[:2])
print("t[2:] -> ",t[2:])
print("t[0:1] -> ",t[1:-1])

#step
print("t[1:-1;2] -> ",t[1:-1:2])
print("t[::-1] -> ",t[::-1])
print(t)
t[::-1]

for i in t:
	print("value :",i)
if "1" in t:
	print("Found")
else:
	print("Not Found")


#if we want to tuple redeclare 
t=("sid","1",1.5)
tu= "siddhant", #creating tuple
print(tu)
x="prateek","ankit", 'ayush'
print(x)
