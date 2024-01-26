#include<stdio.h>
int oddnatural(int n)
{
int i,odd=0;
for(i=1;i<=n;i+=2)
	{
	odd=odd+i;
	}
	printf("sum of odd number = %d",odd);
}

int main()
{
	int n;
	printf("The number you want to do operation :");
	scanf("%d",&n);	
	oddnatural(n);
return 0;
}















