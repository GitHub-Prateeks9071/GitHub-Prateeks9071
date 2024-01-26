//Q1.Create a Employee structure to store the EMPID,NAME,Phone,Email,Salary.(Use array of structure)


#include<stdio.h>

int main()
{	
	struct Employee{
		int id;
		char name[100];
		char phone[12];
		char email[100];
		int salary;
		 
	};
	struct Employee emp[100]; 

	for(int i=0;i<2;i++)
	{
		printf("Enter id of emp %d:",i);
		scanf("%d",&emp[i].id);
		printf("Enter name of emp %d:",i);
		scanf("%s",emp[i].name);
		printf("Enter phone number of emp %d:",i);
		scanf("%s",emp[i].phone);
		printf("Enter email address of emp %d:",i);
		scanf("%s",emp[i].email);
		printf("Enter salary of emp %d:",i);
		scanf("%d",&emp[i].salary);
		 
	}	
	for(int i=0;i<2;i++)
	{
		printf("EMP %d->:%d|%s|%s|%s|%d\n",i,emp[i].id,emp[i].name,emp[i].phone,emp[i].email,emp[i].salary);
	}
	return 0;
}
