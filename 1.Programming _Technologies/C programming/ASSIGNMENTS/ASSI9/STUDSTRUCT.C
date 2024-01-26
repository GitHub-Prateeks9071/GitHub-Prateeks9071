/*Create a structure for student/employee information with suitable
members and do the following
- Creating variables, input, output operations
- create a pointer of struct type, and assign address of variable
- access members from the pointer using arrow operator
- create alias for the structure type, pointer type using typedef*/

#include<stdio.h>

int main()
{
	typedef struct Student{
		int id;
		char name[100];
	}stud;

	stud s;
	stud *pt = &s;

	printf("Enter id of stud : ");
	scanf("%d",&(*pt).id);
	printf("Enter name of s1 : ");
	scanf("%s",pt->name);
	
	printf("Stud -> : %d | %s\n",pt->id,pt->name);
	return 0;
}
