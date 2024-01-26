# String operation


#length of string

name="siddhant"
print (len(name))		


#length of string

print (name[0])			#p
print (name[5])			#e
name[0]				#invalid operation

#cannot modify the index value
#string is read only


#string slicing		#siddhant
print(name[2:4])	#dd			
print(name[2:6])	#ddha	
print(name[0:3])	#sid
print(name[5:8])	#ant	
print(name[5:10])	#ant	
print(name[5:100])	#ant
print(name[1:-3])	#iddh   runs in + to -
print(name[-2:4])	#no output come in - to +
print(name[2:-8])	#no output comes
print(name[-3:8])	#ant

#	variable[start index ; end index]
#jumping
print(name[1:7:2])	#idant
print(name[5:1:-1])	#ahdd
print(name[-4:-7:-1])	#hdd
print(name[:])		#siddhant
print(name[::-1])	#tnahddis     reverses whole string


#iterating in string

for i in name:			#method 1
	print(i)

for i in name[0:8]:		#method2
	print(i,end="\t")
print("\n")


#variable.function()
x=name.upper() 	#conversts to upper case
print(x)
x=name.lower()	#conversts to upper case
print(x)
name.isupper()
name.islower()
print(name.startwith("Si"))
name.endwith("nt")
name.isdigit()
name.isalpha()
name.title
name.index



