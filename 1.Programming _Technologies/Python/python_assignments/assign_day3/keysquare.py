#3.Write a code to create a dictonary from given number range-If the input is 4 then the keys in dictionary are 1,2,3,4-And value is square of the key {1:1, 2:4, 3:9 ,4:16, 5:25}

s={}
choice=int(input("Enter the choice"))
for i in range(1,choice+1):
	s[i]=i*i
print(s)
	
    	
