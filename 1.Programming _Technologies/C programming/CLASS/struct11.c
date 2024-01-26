#include<stdio.h>

	struct 	Date{
	int day;
	int month;
	int year;
};
struct Address{
	int house_no;
	char city[25];
	char state[25];
};
struct employee{
	int emp_id;
	char name[80];
	struct Date DOB;
	struct Address add;
};

void input(struct employee *ep , int *n)
{
	for(int i=1;i<=(*n);i++)
	{
		printf("Employee id - ");
		scanf("%d",&ep[i].emp_id);
		printf("employee name - ");
		scanf("%s",ep[i].name);
		printf("Date of birth - ");
		scanf("%d",&ep[i].DOB.day);
		printf("The month - ");
		scanf("%d",&ep[i].DOB.month);
		printf("year - ");
		scanf("%d",&ep[i].DOB.year);
		printf("House no");
		scanf("%d",&ep[i].add.house_no);
		printf("city");
		scanf("%s",ep[i].add.city);
		printf("state");
		scanf("%s",ep[i].add.state);	
	}
}
void display(struct employee *ep , int *n)
{
	for(int i=1;i<=(*n);i++)
{
	printf(" Employee %dID  -%d,%s",i,ep[i].emp_id,ep[i].name);
	printf("Employee%d NAME - %d,%d,%d",i,ep[i].DOB.day,ep[i].DOB.month,ep[i].DOB.year);
	printf("Employee %dADDRESS - %d,%s,%s",i,ep[i].add.house_no,ep[i].add.city,ep[i].add.state);
}
}
int main()
{
	int n,i;
	typedef struct  employee emp;
	emp ep[100];
	printf("The number of employees are : " );
	scanf("%d",&n);
	input(ep,&n);
	display(ep,&n);	
return 0;
}
