#sets
#it will hold only unique elements
#st is unordered

s={"Siddhant","Tushar","Abdur","Abhishek","Siddhant"}
#list(set(map(lambda i:s.split(" ")))
print(s)
print("\n")

#converts object to set
set()
t={"Siddhant","prateek","Ankit","virendra"}
x={"nancy","Snehal","payal","vinita"}
y={"snehal","vinita"}

print(t.intersection(s))
print("\n")

print(t.union(s))
print("\n")

print(t.difference(s))
print("\n")

print(t.issubset(x))
print("\n")

print(x.issuperset(y))
print("\n")

print(x.isdisjoint(s))
print("\n")

print(s.remove("Abhishek"))		#it not returning removed element
print("\n") 

print(s.pop())   #it returns removed element
print("\n")

#z=t.symmetric_diference_update(s) #separate set
#t.symmetric_difference_update(s)
print(t)
print(s)
t.intersection_update(s)

s={"Siddhant","Tushar","Abdur","Abhishek","Siddhant"}

#loops

for i in s:
	print(i)

print("Tushar" in s)
print(len(s))
print(s>t)  #By length
print(s<t)


#Add data to the set
t.add("sid")
print(t)

s={}  #Empty directory
s=set()  #Empty Set
#list in set:
s={["10",20],["30","40"],["50"],["123"]}
print(s)
