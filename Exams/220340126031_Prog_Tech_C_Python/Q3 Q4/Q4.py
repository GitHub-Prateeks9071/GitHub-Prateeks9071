class Exam:
	__init__(self,queid=0,questiontext="",topic="",teacher_name="",model_answer="",no_of_students_attempted=0)
	def display(self):
		self.queid=queid
		self.questiontext=questiontext
		self.topic=topic
		self.teacher_name=teacher_name
		self.model_answer=model_answer
		self.no_of_students_attempted=no_of_students_attempted

std=[]
def display():
	["queid"]=int(input("Enter Question ID : "))
	["questiontext"]=input("Enter Question Text : ")
	["topic"]=input("Enter Topic Name : ")
	["teacher_name"]=input("Enter Teacher Name : ")
	["model_answer"]=input("Enter Model Answer : ")
	["no_of_students_attempted"]=int(input("Enter No. of Students attempted : "))
	temp=Exam(queid,questiontext,topic,teacher_name,model_answer,no_of_students_attempted)
	std.append(temp)



fd = open('qustions.csv','w+')
	
fd.read(std)
print("List of Students attempted exam : ",std)
