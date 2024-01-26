//Q6. WAP to Addition of two arrays(Allocate on heap)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *x1 = calloc(sizeof(int),5);
	int *x2 = calloc(sizeof(int),5);
	int *y = calloc(sizeof(int),5);
	
	printf("Enter first array values : \n");
	for(int i=0;i<5;i++)
	{
		printf("%d -> ",i);
		scanf("%d",&x1[i]);
	}

	printf("\nEnter second array values : \n");
	for(int i=0;i<5;i++)
	{
		printf("%d -> ",i);
		scanf("%d",&x2[i]);
	}

	printf("\nAddition of two array is : \n");
	for(int i=0;i<5;i++)
	{
		y[i] = x1[i] + x2[i];
		printf("%d -> %d\n",i,y[i]);
	}
	return 0;
}

