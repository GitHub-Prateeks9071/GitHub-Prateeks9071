#include<stdio.h>
int input()
{       
	int n;
	printf("How many numbers=");
	scanf("%d",&n);
}

int add(int n)
{
	int i,sum=0,nums;
	printf("Enter no. you want :\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&nums);
       		sum=sum+nums;	
	}
	return sum;
}

int average(int sum, int n)
	{	
	float avg;
	avg=sum/n;
	return avg;	
	}

int main()
	{
	int sum,res;
	float avg;
	res=input();
	sum=add(res);
	avg=average(sum,res);
	printf("Sum of nos. is =%d",sum);	
	printf("Average of numbers :=%.2f",avg);
		
	return 0;
}

