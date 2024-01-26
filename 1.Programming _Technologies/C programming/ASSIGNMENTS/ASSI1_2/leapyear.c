#include<stdio.h>

int main(){  

int a;
	{
	 printf("Enter the year");
	scanf("%d",&a);
	}

	if(a%4==0||a%100==0||a%400==0)

		{
			printf("The Entered Number is Leap Year");
		}
	else 
		{
			printf("The Entered year is not a leap year");
		}
return 0;
}

