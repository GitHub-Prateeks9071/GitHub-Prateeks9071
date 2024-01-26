# PROJECT
emp=[]
Manage_team = []

def add_employee():
	print("\nERP PROJECT\n")
	em={}
	em["Empid"]=int(input("Enter employee id : "))
	em["Name"]=input("Enter employee name : ")
	em["Age"]=int(input("Enter employee age : "))
	em["Gender"] =input("Enter employee gender : ")
	em["Place"]=input("Enter employee place : ")
	em["Salary"]=int(input("Enter employee salary : "))
	em["previous_company"]=input("Enter employee previous company : ")
	em["joining_date"]=input("Enter employee joining date : ")
	emp.append(em)
 
def display():
	print("\nERP PROJECT\n")
	print(emp)

def delete_employee():
	print("\nERP PROJECT\n")
	name = input("Enter name to delete : ")
	flag = 0
	for i in emp:
		if i["Name"] == name:
			 flag = 1
	if flag == 1:
		emp.remove(i)
	else:
		print("This employee is not here")

def search_employee_by_name():
	print("\nERP PROJECT\n")
	name = input("Enter employee name for search : ")
	flag = 0
	for i in emp:
		if i["Name"] == name:
			 flag = 1
	if flag == 1:
		print("Employee is present\n")
	else:
		print("Employee is not present")
				 
def change_employee_date():
	print("\nERP PROJECT\n")
	def sub_menu():
		print("1.Change name")
		print("2.Change age")
		print("3.Change gender")
		print("4.Change salary")
	Id = int(input("Enter employee id for change data : "))
	for i in emp:
		if i["Empid"] == Id:
			sub_menu()
			ch=int(input("Enter choice for change : "))
			if ch==1:
				name=input("Enter new name : ")
				i["Name"]=name
			elif ch==2:
				emp_age=int(input("Enter new age : "))
				i["Age"]=emp_age
			elif ch==3:
				gen=input("Enter new gender : ")
				i["Gender"]=gen
			elif ch==4:
				sal=int(input("Enter new salary : "))
				i["Salary"]=sal
		 
def menu():
	print("\nERP PROJECT\n")
	print("1.Add employee")
	print("2.Delete employee")
	print("3.Search employee by name")
	print("4.Change employee data")
	print("5.Display")
	print("6.Manage All Team")

def Manage_all_team():
	print("\nERP PROJECT\n")
	def sub_menu():
		print("1.Create new team")
		print("2.Display team")
		print("3.Manage team")
		print("4.Delete team")
		print("5.Previous menu")
	
	while 1:
		sub_menu()
		ch=int(input("Enter choice : "))
		if ch==1:
			create_new_team()
		elif ch==2:
			display_team()
		elif ch==3:
			manage_team()
		elif ch==4:
			delete_team()
		elif ch==5:
			menu()
		else:
			 break

def create_new_team():
	print("\nERP PROJECT\n")
	tm = {}
	tid = []
	team_name = input("Enter team name : ")
	flag = 0
	k = int(input("Enter team size : "))
	while k != 0:
		Id = int(input("Enter employee Id : "))
		for i in emp:
			if i["Empid"] == Id:
				 flag = 1
		if flag == 1:
			tid.append(Id)
		else:
			print("This employee id is not here")
		k -= 1
	tm[team_name]=tid
	Manage_team.append(tm)
	print("\nERP PROJECT\n")
	 
def display_team():
	print("\nERP PROJECT\n")
	print(Manage_team)

def manage_team():
	print("\nERP PROJECT\n")
	def sub_menu():
		print("\nERP PROJECT\n")
		print("1.Rename team")
		print("2.Display members")
		print("3.Add members")
		print("4.Delete members")
		print("6.Previous menu")
		
	
	while 1:
		sub_menu()
		ch = int(input("Enter your choice : "))
		if ch==1:
			rename_team()
		elif ch==2:
			display_members()
		elif ch==3:
			add_members()
		elif ch==4:	
			delete_members()
		elif ch==5:
			Manage_all_team()
		else:
			 break
 
def rename_team():
	name = input("Enter team name : ")
	flag = 0
	for i in range(0,len(Manage_team)):
		key = list(Manage_team[i].keys())
		if key[0] == name:
			rename = input("Enter new team name : ")
			values = list(Manage_team[0].values())
			Manage_team[0][rename] = values[0]
			del Manage_team[0][name]
	if flag == 1:
		print("This id is not here")
		
 		
def  display_members():
	print("\n****ERP PROJECT****\n")
	for i in Manage_team:
		print(i.values())
		
def delete_team():
	print("\nERP PROJECT\n")
	name = input("Enter name to delete : ")
	for i in range(0,len(Manage_team)):
		key = list(Manage_team[i].keys())
		if name == key[0]:
			Manage_team.remove(Manage_team[i])
#[{"up":[1,2,3]}]
#[{"emp_name": "Prateek Singh", "":}]
def add_members():
	print("\nERP PROJECT\n")
	name = input("Enter name : ")
	#l=list(Manage_team[0].values())
	for j in range(len(Manage_team)):
		key = list(Manage_team[j].keys())
		if name == key[0]:
			Id = int(input("Enter id for add member : "))
			for i in emp:
				if i["Empid"]==Id:
					#Newid = int(input("Enter new id : "))
					Manage_team[j][key[0]].append(Id)
      
  
					  
		 
def delete_members():
	print("\nERP PROJECT\n")
	name = input("Enter name for delete members : ")
	for j in range(len(Manage_team)):
		key = list(Manage_team[j].keys())
		if name == key[0]:
			val = list(Manage_team[j].values())
			print(val)
			Id = int(input("Enter id to remove from team : "))
			for i in emp:
				if i["Empid"]==Id:
					Manage_team[j][key[0]].remove(Id)       
			 
while True:
	menu()
	ch=int(input("Enter choice : "))
	if ch==1:
		add_employee()
	elif ch==2:
		delete_employee()
	elif ch==3:
		search_employee_by_name()
	elif ch==4:
		change_employee_date()
	elif ch==5:
		display() 
	elif ch==6:
		Manage_all_team()
	else:
		print("invalid input")
"""Projects Assignment:
1.Console ERP project
Implement using dictionary:
	-Add Employee
	-Delete Employee
	-Search Employee by name
	-Change Employee Data
		=>Change name
		=>change age
		=>Change gender
		=>change salary
	-Manage All Teams
		-Create new Team
		-Display team
		-Manage Team(Particular Team)
			-Rename Team(optional)
			-Display Members
			-Add Members
			-Delete Members
		-Delete Team
	-Display 

Properties:Empid, Name,age,gender,place,salary,previous_company,joining_date
Date format "21/04/2021" dd/mm/yyyy"""



