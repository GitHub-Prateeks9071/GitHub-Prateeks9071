#include<stdio.h>
int main()
{
 struct employee
{
	int empid;
	char empname[100];
	char salary;
	char YOJ[8];
};
int min,max,total=0,average;
typedef struct employee empl;
	empl emplo[100];
	printf("The no. of employees are : ");
	scanf("%d",&no_of_employees);
int no_of_employees,i;
for(int i=1;i<=no_of_employees;i++)
{
	printf("The employee id is : ");
	scanf("%d",&emplo[i].empid);

	printf("The employee name is : ");
	scanf("%d",&emplo[i].name);

	printf("The salary of employee is : ");
	scanf("%d",&emplo[i].salary);

	printf("Year of joining is : ");
	scanf("%d",&emplo[i].YOJ);

}
	for(int i=1;i<=no_of_employees;i++)
{
		printf("%d|%c|%d|%d",emplo[i].empid,emplo[i].empname,emplo[i].salary,emplo[i].YOJ);
}


return 0;
}
