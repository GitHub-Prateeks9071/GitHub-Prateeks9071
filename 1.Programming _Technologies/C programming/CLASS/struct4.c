#include<stdio.h>
int main()
{
 struct student

{
int prn;
char name[100];
int assignment;
};
typedef struct student stud;
stud s1;
stud *pt=&s1;
printf("Enter prn no of s1:");
scanf("%d",&(*pt).prn);

printf("Enter name of s1:");
scanf("%s",(*pt).name);

printf("Enter number of assignment:");
scanf("%d",&(*pt).assignment);

printf("S1 -> :%d | %s | %d\n",s1.prn ,s1.name ,s1.assignment);
printf("S1 -> :%d | %s | %d\n",(*pt).prn , (*pt).name , (*pt).assignment);
printf("S1 -> :%d |%s  |%d\n",pt->prn , pt->name , pt->assignment);
return 0;
}
