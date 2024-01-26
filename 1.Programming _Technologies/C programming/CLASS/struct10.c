#include<stdio.h>
int main()
{
 struct employee
typedef struct employee empl;
empl emplo[100];
{
	int empid;
	char empname[100];
	char salary;
	char YOJ[8];
};
	int no_of_employees,i;
	printf("The no. of employees are : ");
	scanf("%d",&no_of_employees);

for(int i=1;i<=no_of_employees;i++)
{
	printf("The employee id is : ");
	scanf("%d",&emplo[i].empid);

	printf("The employee name is : ");
	scanf("%d",&emplo[i].empname);

	printf("The salary of employee is : ");
	scanf("%d",&emplo[i].salary);

	printf("Year of joining is : ");
	scanf("%d",&emplo[i].YOJ);

}
	for(int i=1;i<=no_of_employees;i++)
{
		printf("\n%d|%c|%d|%d",emplo[i].empid,emplo[i].empname,emplo[i].salary,emplo[i].YOJ);
}


return 0;
}
