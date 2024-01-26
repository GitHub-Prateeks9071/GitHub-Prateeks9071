//7.Write a program to print n even numbers(take n input from user)

#include<stdio.h>

void even(int n)
{
	for(int i=0;i<=2*n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	} 
}

int main()
{
	int n;
	printf("Enter number = ");
	scanf("%d",&n);
	even(n);
	return 0;
}
