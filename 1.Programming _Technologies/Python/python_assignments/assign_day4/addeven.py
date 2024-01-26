#2.Perform addition of all even number from string

num="5,2,3,9,5,6,11,8,9"
a=num.split(",")
sum=0

add= lambda x : sum + int(x)
for i in a:
	sum = add(i)
print("Addition = ",sum) 

