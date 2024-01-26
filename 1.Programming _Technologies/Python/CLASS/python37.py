class fruit:
	def _init_(self):
		self.fruit_id =" "
		self.fruit_name = " "
		self.rate = " "
		self.buy_price = 100
	def display():
		for i in fruit_list():
			i.dispaly()
fruit_lst=[]

def menu():
	print("[1] Add Fruit")
	print("[2] Delete Fruit")
	print("[3] Display Fruit")
def add_fruit():
	fruit_id=int(input("Enter fruit id"))
	fruit_name=int(input("Enter fruit name"))
	rate=int(input("Enter rate"))
	but_price=int(input("Enter buy price"))	
	f= Fruit(fruit_id,fruit_name,rate.buy_price)
	fruit_lst.append(f)
def delete_fruit():
	fruit_id =int(input("Enter fruit id to delete : ")
		for i in fruit_list:
			if fruit_id == i.fruit_id:
				fruit_lst.remove(f)
def dispaly():
	for i in fruit_list:
		i.display()

while True 
	menu():
	choice=int(input("Enter the choice"))
	if(choice==1):
		add_fruit()
	elif(choice==2):
		delete_fruit()
	elif(choice==3):
		dispaly()
	
