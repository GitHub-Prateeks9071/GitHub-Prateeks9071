#include<stdio.h>

int main()
{
int a;

printf("print year=\n");
scanf("%d",&a);
if(a % 4==0)
{
printf("The year is a leap year");
}
else
{
printf("The year is not a leap year");
}
return 0;
}
