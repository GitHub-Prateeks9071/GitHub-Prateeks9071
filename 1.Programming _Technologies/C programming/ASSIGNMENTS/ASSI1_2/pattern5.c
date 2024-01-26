#include<stdio.h>

int main()

{
	 int i,j,k,l;
	
	
	for(i=1;i<=5;i++)
	{

		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
	
		for(k=1;k<=i;k++)
		{
			printf("%d",i);	
		}
		for(l=1;l<i;l++)
		{	
			printf("%d",i);
		}
		printf("\n");
	}

return 0;
}
