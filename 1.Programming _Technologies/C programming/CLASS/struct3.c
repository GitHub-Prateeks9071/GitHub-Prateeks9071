#include<stdio.h>
int main()
{


struct Employee
{

	int empid;
	char name[100];
	char email[20];
	char phone[13];
	int salary;
};

	struct Employee Emp[10];
	int i;
for(i=0;i<2;i++)

{

	printf("Enter employee id of E1:");
	scanf("%d",&Emp[i].empid);

	printf("Enter name of E1:");
	scanf("%s",Emp[i].name);

	printf("Enter Email E1:");
	scanf("%s",Emp[i].email);

	printf("Enter the phone number E1");
	scanf("%s",Emp[i].phone);

	printf("Enter the salary E1");
	scanf("%d",&Emp[i].salary);
}

for(i=0;i<2;i++)
{
	printf("%d|%s|%s|%s|%d\n", Emp[i].empid,Emp[i].name,Emp[i].email, Emp[i].phone, Emp[i].salary);
}

return 0;
}
