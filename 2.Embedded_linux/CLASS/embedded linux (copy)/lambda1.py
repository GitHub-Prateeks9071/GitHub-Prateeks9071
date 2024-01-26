num="5,2,3,9,5,6,11,8,9"
lst=num.split(",")
sum=0
addition=(lambda i: int(i)+sum)
for i in lst:
	sum=addition(i)
print(sum)

