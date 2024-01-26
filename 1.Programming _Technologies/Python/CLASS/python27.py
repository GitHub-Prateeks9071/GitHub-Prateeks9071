#  Dictionaries

#empty dictionary

d={}

#Dictinary

s1= {
	"name":"prateek",
	"prn" :"21",
	"phone":"8770446748",
	"DOB":"15/09/1996",
	"state": "M.P.",
	"city" : "Rewa",
}

#length of dictionary
print("Length",len(s1))			# How many key valuye pair

#print
print(s1)

# Access every element
print(s1["name"])
print(s1["phone"])

#Add new data
s1["email"] = "prateeks907@hmaol.com"
print(s1)
print("\n")

# remove data from dictionary
s1.pop("city")
print(s1)
print("\n")
del s1["state"]
print(s1)

#loops
for i in s1.keys():
	print("keys:",i)
for i in s1.values():
	print("values",i)
for i,j in s1.items():
	print(i," -> ",j)


#deleting dictionary
#del s1

#key is present or not
if "name" in s1:
	print("Key is in dictionary")
else:
	print("key is not present")
