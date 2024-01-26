#3.Write the above string into 10 files data3.txt,data4.txt and so on.. 


string = """A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. These programs enable computers to perform a wide range of tasks. A computer system is a complete computer that includes the hardware operating system main software  and peripheral equipment needed and used for full operation. This term may also refer to a group of computers that are linked and function together"""


std=["Q31.txt","Q32.txt","Q33.txt","Q34.txt","Q35.txt","Q36.txt","Q37.txt","Q38.txt","Q39.txt","Q3110.txt"]
for i in std:
	fd=open(i,"w+")
	fd.write(string)

