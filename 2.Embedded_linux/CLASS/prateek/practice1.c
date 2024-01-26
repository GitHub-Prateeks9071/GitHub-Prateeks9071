#include<stdio.h>
int a[10][10];
int n,m;
int main()
{
	printf("enter the size of row=");
	scanf("%d",&m);
	printf("enter the size of col=");
	scanf("%d",&n);
	printf("enter the element in first matrix=\n");
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	
	printf("transpose of the matrix=\n");
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	printf("%d ",a[j][i]);
	}
	printf("\n");
	}
	
	return 0;
}

