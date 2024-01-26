#include<stdio.h>

int patt()

{
	 int i,j,k,l,n;
	printf("Enter the nuo of iterations");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
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
}

	int main()
	{
	patt();
	return 0;
	}
