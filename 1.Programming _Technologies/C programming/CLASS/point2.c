#include<stdio.h>
void swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
}

int main()
{
int a,b;
printf("The numbers to be swapped are : ");
scanf("%d",&a);
scanf("%d",&b);
swap(a,b);
printf("The swapped numbers are a=%d \n b=%d \n: ",a,b);
return 0;
}
