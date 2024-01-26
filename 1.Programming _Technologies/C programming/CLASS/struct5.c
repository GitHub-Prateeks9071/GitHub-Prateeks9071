#include<stdio.h>
int main()
{
struct student
{
char name[20];
int rollno;
char fathers_name[100];
char grade[5];
};
typedef struct student stud;
stud std[20];
stud *pt = std;
int i;
for(i=1;i<4;i++)
{
printf("Enter name = ");

scanf("%s",pt[i].name);

printf("Enter the roll no= ");
scanf("%d",&pt[i].rollno);

printf("Enter fathers name=");
scanf("%s",pt[i].fathers_name);

printf("Enter grade =");
scanf("%s",pt[i].grade);
}
for(i=1;i<4;i++)
{
printf("S1 -> :%s | %d | %s | %s\n",pt[i].name , pt[i].rollno ,pt[i].fathers_name, pt[i].grade);
}

return 0;
}
