std=[]
while(1):
	print("Enter the choice: \nchoice[1]: For Adding student \n choice[2]: For deleting student \n choice[3]:For checking student presence \n choice[4] : Display ")
	choice= int(input())
	if(choice==1):
		print("Add Student")
		name=input("Name")
		std.append(name)

	if(choice==2):
		print("Remove Student")
		name=input("Name")
		std.remove(name)

	if(choice==3):
		print("Checking the student is present or not")
		if(name in std):
			print("The student is present")
		else:
			print("Student is not present")
	if(choice==4):
		print(std)
