#include<stdio.h>

int harmonics(int n)
{	float i, sum =0,term;
	
	for(i=1;i<=n;i++)

	{	
		term=(1/i);
		sum=sum+term;
	}
	printf("The sum of series is = %lf",sum);	
}




int main()
{
	float i,sum=0;
	int n;
	printf("the sum of series is = : ");
	scanf("%d",&n);     
	harmonics(n);
	
return 0;
}
