
"""
Use Class-Object
1.Start a mini project Console ERP system.
	-Add Employee
	-Delete Employee
	-Search Employee by name
	-Search employee by empid
	-Search employee by salary(Check greater)
	-Change Employee Data(name,id,salary)
	-Display
Empid, Name,age,gender,place,salary,previous_company,joining_date 

"""

class Empl:
	def __init__(self,empid=0,name="",age=0,gender="",place="",salary=0,previous_company="",joining_date=""):
		self.empid=empid
		self.name=name
		self.age=age
		self.gender=gender
		self.place=place
		self.salary=salary
		self.previous_company=previous_company
		self.joining_date=joining_date

	def display(self):
		print("empid: ",self.empid)
		print("name",self.name)
		print("age",self.age)
		print("gender",self.gender)
		print("place",self.place)
		print("salary",self.salary)
		print("previous_company",self.previous_company)
		print("joining_date",self.joining_date)

emp=[]
def menu():
	print("_"*100)
	print("[1]Add employee")
	print("[2]-Display")
	print("[3]Delete Employee")
	print("[4]Search employee by Name")
	print("[5]Search employee by empid")
	print("[6]Search employee by salary(Check greater)")
	print("[7]Change Employee Data(name,id,salary)")
	


def add_employee():
	empid=int(input("Enter empid"))
	name=input("Enter the name")
	age=int(input("Enter the age"))
	gender=input("Enter the employee Gender")
	place=input("Enter the place")
	salary=int(input("Enter the salary"))
	previous_company=input("Enter the previous company")
	joining_date=input("Enter the joining date")
	w=Empl(empid,name,age,gender,place,salary,previous_company,joining_date)
	emp.append(w)

def display_emp():
	for i in emp:
		i.display()
	

def delete_employee():
	empid=int(input("Enter empId to delete"))
	for i in emp:
		if empid==i.empid:
			emp.remove(i)
	i.display()

def search_emp_by_name():
	name=input("Enter the name of employee")
	for i in emp:
		if i.name == name:
			print("Employee present")
			i.display()
		else:
			print("Employee not found not found")
	
			
def search_emp_by_id():
	empid=int(input("Enter The emp id"))
	for i in emp:
		if i.empid == empid:
			print("Employee Found")
			i.display()
		else:
			print("Employee not found")
	

def search_emp_by_salary():
	salary=int(input("Enter the salary :"))
	for i in emp:
		if i.salary <= salary:
			print("Employee Found")
			i.display()
		else:
			print("Employee not found")
	

def change_emp_data():
	ch1=int(input("Enter The data you want to change"))
	if(ch1==1):
		empid=int(input("Enter the old name"))
		for i in emp:
			if(empid==i.empid):
				i.emp=int(input("Enter the new name :"))
	if(ch1==2):
		name=input("Enter the name : ")
		for i in emp:
			if(name==i.name):
				i.name=input("Enter the changed name : ")
	if(ch1==3):
		salary=int(input("Enter the salary : "))
		for i in emp:
			if(salary==i.salary):
				i.salary=int(input("Enter the changed salary :"))
	else:
		("Enter the right input")
		

		
while 1:
	menu()
	ch=int(input("Enter the choice"))
	if(ch==1):
		add_employee()
	elif(ch==2):
		display_emp()
	elif(ch==3):
		delete_employee()
	elif(ch==4):
		search_emp_by_name()
	elif(ch==5):
		search_emp_by_id()
	elif(ch==6):
		search_emp_by_salary()				
	elif(ch==7):
		change_emp_data()

	else:
		print("Exit")
