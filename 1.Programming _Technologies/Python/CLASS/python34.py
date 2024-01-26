lst=[]
def add_employee():	
d={}
d["fruit_id"] = int(input("Enter Id : "))
d["fruit_name"] = input("Enter name : ")
d["rate"] = input("Enter rate")
d["imported_from"]= input("Enter imported from city: ")
d["import_date"] = input("Enter date")
d["buy_price"] = input("Enter price")
d.append()

def remove_employee():
	d.remove()
def search_fruit
	if 
	
def menu():
	print("Enter the choice : \n add_fruit[1]:\n delete_fruit: \n search_fruit :\nchange_name_rate : \n display \n")

while True:
	menu()
	choice=int(input("Enter the choice"))
	if(choice==1):
		lst.append(d)
	elif(choice==2):
		lst.remove(d)
	elif(choice==3):
		search_fruit()
	elif(choice==4):
		change_name_rate()
	elif(choice==5):
		print(d)


