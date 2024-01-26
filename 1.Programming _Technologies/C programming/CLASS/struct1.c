#include<stdio.h>
int main()
{
struct Student
{
int prn;
char name[100];
char phone[12];
int no_of_assighment;
};
struct Student std[100];
for(int i=0;i<2;i++)
{
printf("Enter prn number od std %d",i);
scanf("%d",&std[i].prn);
printf("Enter the name of %d :",i);
scanf("%s",&std[i].name);
printf("Enter the phone number %d : ",i);
scanf("%s",std[i].phone);
printf("Enter the number of assignments %d : ",i);
scanf("%s",std[i].no_of_assignment);

for(int i =0;i<2;i++)
{
printf("STD ");

return 0;
}


