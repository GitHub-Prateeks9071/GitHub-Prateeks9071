#include<stdio.h>
int main()
{ 
	int a, b;
	printf("The numbers to be swapped are\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("The swapped numbers are : a=%d \n b=%d\n",a,b);
return 0;
}


int swap(int *x , int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}


