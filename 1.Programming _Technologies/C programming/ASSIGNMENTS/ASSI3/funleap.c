#include<stdio.h>
 int leap(int year)
{  
        
      if((year%4==0)||year%100==0||(year%400==0))
	{
	printf("This is a leap year");
	}
      else 
	{
	printf("This is Not a leap Year");
	}

}

int main()
	{
	int year;
	printf("Enter a year \n");
	scanf("%d",&year);
        leap(year);
	return 0;
	}
