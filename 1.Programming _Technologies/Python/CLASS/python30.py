std=[]   #empty list
"""
{


}

"""

def add_student():
	temp={}
	temp["prn"]=int(input("Enter prn : "))
	temp["name"]=input("Enter name : ")
	temp["address"]=input("Enter Address : ")
def delete_student():
	prn=int(input("Enter prn to delete: "))
	for i in std:
		if i["prn"]==prn:
			std.remove(1)
def menu():
	print("[1] ADD STUDENT")
	print("[2] DELETE STUDENT")
	print("[3] DISPLAY STUDENT")
	print("[4] EXIT")

while menu():
	choice=int(input("Enter the choice"))
	if(choice==1):
		add_student()
	elif(choice==2):
		delete_student()
	elif(choice==3):
		delete_student()
	

	
