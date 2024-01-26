#3. Additin of even no.

num="5,2,3,9,5,6,11,8,9"
a=num.split(",")
sum=0
l=list(filter(lambda c : int(c)%2==0,a))
add = lambda y : int(y)+sum
for i in l:
	sum=add(i)
print("Addition of Even nuber = ", sum)


