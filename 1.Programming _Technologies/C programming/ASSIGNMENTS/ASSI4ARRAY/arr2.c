#include<stdio.h>
int main()
{
	int day1,month1,year1,day2,month2,year2,value,day;
	day1 = 1;
	month1 = 1;
	year1 = 1970;
	printf("\nEntar the day you have = ");
	scanf("%d",&day2);
	printf("\nEntar the month you have = ");
	scanf("%d",&month2);
	printf("\nEntar the year you have = ");
	scanf("%d",&year2);
	printf("\n%d/%d/%d to %d/%d/%d",day1,month1,year1,day2,month2,year2);
	month2=month2-1;
	year2=year2+1;
	value = year2*12*30+month2*30+day2;
	printf("\nDay of calculating = %d",value);
	if(value%7==0)
	{
		printf("\nDay of that date is = Thursday");
	}
	if(value%7==1)
	{
		printf("\nDay of that date is = Friday");
	}
	if(value%7==2)
	{
		printf("\nDay of that date is = Satarday");
	}
	if(value%7==3)
	{
		printf("\nDay of that date is = Sunday");
	}
	if(value%7==4)
	{
		printf("\nDay of that date is = Monday");
	}
	if(value%7==5)
	{
		printf("\nDay of that date is = Tuesday");
	}
	if(value%7==6)
	{
		printf("\nDay of that date is = Wensday");
	}
	
return 0;
}
