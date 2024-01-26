/*Q4. Create an employee structure with the following members empid, employee name, salary, year of joining etc. Accept the data for certain no. of employees and find their total, average, max, min salary. 
Also find out the employees with maximum, minimum service,use a function to find service for each employee element in the array.
*/

#include<stdio.h>

struct employee{
		int id;
		char name[100];
		int salary;
		int year;
};

void service(struct employee *emp, int no_of_emp)
{
	int p1=0,p2=0;
	int max = emp[0].year;
	int min = emp[0].year;
	for(int j=0;j<no_of_emp;j++)
	{
		if(emp[j].year<min)
		{
			min = emp[j].year;
			p1 = j;		
		}
		if(emp[j].year>max)
		{
			max = emp[j].year;
			p2 = j;
		}
	}
	printf("\nminimum of service[%d] = %d\nmaximum of service[%d] = %d",p2,max,p1,min);	
}

int main()
{	 
	struct employee emp[100];
	int no_of_emp,avg,min;
	int total = 0;

	printf("Enter number of employee : ");
	scanf("%d",&no_of_emp);
	for(int i=0;i<no_of_emp;i++)
	{
		printf("Enter id : ");
		scanf("%d",&emp[i].id);
		printf("Enter name : ");
		scanf("%s",emp[i].name);
		printf("Enter salary : ");
		scanf("%d",&emp[i].salary);
		printf("Enter year of joining : ");
		scanf("%d",&emp[i].year);
	}
	
	int max = emp[0].salary;
	min = emp[0].salary;
		
	for(int j=0;j<no_of_emp;j++)
	{
		total += emp[j].salary;
		avg = total / no_of_emp;
			
		if(emp[j].salary<min)
		{
			min = emp[j].salary;		
		}
		if(emp[j].salary>max)
		{
			max = emp[j].salary;
		}
	}
		 
	

	printf("Minimum salary is : %d\n",min);
	printf("Maximum salary is : %d\n",max);
		
	
	printf("Total salary of employee : %d\n",total);
	printf("Average salary of employee : %d",avg);	
	service(emp,no_of_emp);
	return 0;
}
