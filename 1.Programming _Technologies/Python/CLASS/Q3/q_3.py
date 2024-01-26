question=[]
str1=str(question)
lst=str1.split(",")
f=open("questions.csv","w+")
f.write(str(lst))

def add_question():
	q={}
	q["queid"]=int(input("Enter Question id : "))
	q["questiontext"]=input("Enter Question Text : ")
	q["topic"] =input("Enter Topics: ")
	q["teacher_name"] =input("Enter Teacher Name : ")
	q["model_answer"] =input("Enter Model Answer: ")
	q["no_stu"] =int(input("Enter Number of students attempted: "))
	question.append(q)
 
def display():
	print(question)


def menu():
	print("1.Add Question paper Details")
	print("2.Display Question Paper Details")
	print("3.Exit")

while True:
	menu()
	ch=int(input("Enter choice : "))
	if ch==1:
		add_question()
	elif ch==2:
		display()
	elif ch==3:
		break
	else:
		print("invalid input")
	
