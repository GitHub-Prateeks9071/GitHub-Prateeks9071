
emp=[]
def add_employee():
	temp={}
	temp["ID"] = int(input("Enter prn : "))
	temp["name"] = input("Enter name : ")
	temp["Gender"] = input("Enter Gender : ")
	temp["address"] = input("Enter Address: ")
	temp["salary"] = input("Enter salary : ")
	temp["previous company"] = input("Enter previous company : ")
	emp.append(temp)

def delete_employee():
	ID = int(input("Enter ID to delete : "))
	for i in emp:
		if i["ID"]==ID :
			emp.remove(temp)

def display_employee():
	print(emp)

def menu():
	print("Enter the choice \n Add Employee : [1] \n Delete Enployee : [2] \n Display Employee : [3] \n Exit : [4]")

while(True):
	menu()
	ch=int(input("Enter the choice : "))
	if(ch==1):
		add_employee()
	if(ch==2):
		delete_employee()
	if(ch==3):
		display_employee()
	if(ch==4):
		break
	else:
		print("Wrong input")
	
	
	
