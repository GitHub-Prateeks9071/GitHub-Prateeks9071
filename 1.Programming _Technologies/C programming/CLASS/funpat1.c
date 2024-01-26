#include<stdio.h>
int input()
{
	int a;
	printf("Howw many row you want = ");
	scanf("%d",&a);
	return a;
}
void pat(int n)
{
	int i,k;
	for(i=1;i<=n;i++)     //row changing
	{
		for(k=1;k<=i;k++)  //colum changing
		{
			printf("%d",i);
                	
		}
		printf("\n");
	}
}

int main()
{	
	int n = input();
	pat(n);	
	return 0;
}

