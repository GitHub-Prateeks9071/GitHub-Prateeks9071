#include<stdio.h>
int main()

{

int a,N,sum=0,numbers;
float average;
printf("How many numbers you want to print");
scanf("%d",&N);

printf("Enter the numbers");

for (a=0; a<N; ++a)
	{
	scanf("%d",&numbers);
	sum = sum+numbers;
	}

	average= sum/N;

	printf("The sum of numbers = %d",sum);
	printf("The average of numbers =%.2f",average);

return 0;

}
