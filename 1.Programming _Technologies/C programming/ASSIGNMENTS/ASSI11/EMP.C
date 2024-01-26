#include<stdio.h>
#include"p2.h"

void input(struct Employee *emp,int* num_emp)
{
	printf("Enter Employee name : ");
	scanf("%s",emp[(*num_emp)].name);
	printf("Enter Employee empId : ");
	scanf("%d",&emp[(*num_emp)].EmpId);
	printf("Enter Employee day of birth : ");
	scanf("%d",&emp[(*num_emp)].dob.day);
	printf("Enter Employee month of birth : ");
	scanf("%d",&emp[(*num_emp)].dob.month);
	printf("Enter Employee year of birth : ");
	scanf("%d",&emp[(*num_emp)].dob.year);
	printf("Enter Employee flat number : ");
	scanf("%d",&emp[(*num_emp)].add.flatNo);
	printf("Enter Employee city : ");
	scanf("%s",emp[(*num_emp)].add.City);
	printf("Enter Employee state : ");
	scanf("%s",emp[(*num_emp)].add.State);
	++(*num_emp);
}

void display(struct Employee *emp, int* num_emp)
{
	for(int i=0;i<(*num_emp);i++)
	{
		printf("%d\n",emp[i].EmpId);
		printf("%s\n",emp[i].name);
		printf("%d\n",emp[i].dob.day);
		printf("%d\n",emp[i].dob.month);
		printf("%d\n",emp[i].dob.year);
		printf("%d\n",emp[i].add.flatNo);
		printf("%s\n",emp[i].add.City);
		printf("%s\n",emp[i].add.State);	
	}
}

void search(struct Employee *emp, int* num_emp)
{	int b; 
	printf("Enter employee id : ");
	scanf("%d",&b);
	for(int i=0;i<(*num_emp);i++)
	{
		if(b == emp[i].EmpId)
		{
			printf("Employee of this id is = %s\n",emp[i].name);
		}
	} 
}

void change(struct Employee *emp, int* num_emp)
{	 
	int a;
	printf("Enter employee id : ");
	scanf("%d",&a);
	for(int i=0;i<(*num_emp);i++)
	{
		if(a == emp[i].EmpId)
		{
			printf("Enter new name of employee : ");
			scanf("%s",emp[i].name);
		}
	}		 
}

int menu_choice()
{
	int ch = 0;
	printf("[1] Add Employee\n");
	printf("[2] Display Employee\n");
	printf("[3] Search employee by EmpId\n");
	printf("[4] Change name of given employee\n");
	printf("[5] Exit\n");	
	printf("Enter choice : ");
	scanf("%d",&ch);
	return ch;
}

int main()
{
	struct Employee emp[100];
	int num_emp = 0;
	int ch = 0;
	//Menu
	do{
	 	ch = menu_choice();
		if(ch==1)
		{
			input(emp, &num_emp);
		}
		else if(ch==2){
			display(emp,&num_emp);
		}
		else if(ch==3){
			search(emp, &num_emp);
		}
		else if(ch==4){
			change(emp, &num_emp);
		}
		else if(ch==5){
			break;
		}
			else{
				printf("Wrong choice");
			}	
	}while(1); 
	return 0;
}
