#include<stdio.h>
int main()
{


int i,j,k,n;
printf("Enter a number");
scanf("%d",&n);

for(i=1;i<=n;i++)		//rows

{
	for(j=1;j<=n-i;j++)	//spaces
	{
	printf(" ");
	}

	for(k=1;k<=i;k++)	//columns
	{
	printf("%d",i);
	}

	{
	printf("\n");
	}
}
return 0;
}

