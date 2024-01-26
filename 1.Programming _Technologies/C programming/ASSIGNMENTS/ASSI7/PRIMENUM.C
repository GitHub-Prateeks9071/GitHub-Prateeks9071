//9.Write a program to find given number is prime number or not

#include<stdio.h>

int prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
		if(c==2)
		{
			printf("%d is prime number",n);
		}
			else
			{
				printf("%d is not prime number",n);
			}
}

int main()
{
	int n;
	printf("Enter number = ");
	scanf("%d",&n);
	prime(n);
	return 0;
}
