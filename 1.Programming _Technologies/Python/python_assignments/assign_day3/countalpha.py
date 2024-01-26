string = """A computer is a machine that can be programmed to carry out sequences of
 	arithmetic or logical operations automatically. Modern computers can perform
 	generic sets of operations known as programs. These programs enable computers
 	to perform a wide range of tasks. A computer system is a complete computer
 	that includes the hardware operating system main software and peripheral
 	equipment needed and used for full operation. This term may also refer 
	to a group of computers that are linked and function together """

str2={}
for i in range(65,91):
	e=chr(i)
	d[e]=string.count(e)
for i in range(97,123):
	f=chr(i)
	d[f]=string.count(f)

print("\n alphabet occurance --> ",d) 
		
		
