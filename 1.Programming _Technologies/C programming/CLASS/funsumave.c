#include<stdio.h>
int input()
{
	int n;
	printf("How many numbers=");
	scanf("%d",&n);
	return n;
}
int add(int n)
{
	int i,sum=0,nums;
	printf("\nEnter Numbers :\n");
	for(i=1;i<=n;i++)
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
	printf("\nSum of the numbers are=%d",sum);
	printf("\nAverage of the numbers are=%.2f",avg);
	return 0;
}
