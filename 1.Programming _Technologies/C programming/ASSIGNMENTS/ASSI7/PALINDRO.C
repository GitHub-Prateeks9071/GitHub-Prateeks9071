//6.Write a program to find given number is palindrome or not

#include<stdio.h>

void palindrom(int n)
{	int temp=0,r,s;
	 s=n;
	while(n>0)	
	{
		r = n%10;
		temp = temp*10+r;
		n = n/10;
		 
	}
	if(s==temp)
	{
		printf("Number is palindrom");	
	}
		else{
			printf("Number is not palindrom");
		}
}

int main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	palindrom(n);
	return 0;
}
