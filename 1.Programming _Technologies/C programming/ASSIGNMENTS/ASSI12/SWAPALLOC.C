//Q4. Write a function to swap two variables Pass by reference (Allocate memory on heap)

#include<stdio.h>
#include<stdlib.h>

int* swap(int* x1, int* x2)
{
	int temp;
	temp = *x1;
	*x1 = *x2;
	*x2 = temp;
	 
}

int main()
{
	int *x1 = malloc(sizeof(int));
	int *x2 = malloc(sizeof(int));
	 
	printf("Enter x1 data : ");
	scanf("%d",x1);//Why we not use & operator
	printf("Enter x2 data : ");
	scanf("%d",x2);
	printf("Before swaping \nx1 : %d\nx2 : %d",*x1,*x2);
	swap(x1,x2);
	printf("\nAfter swaping\n");
	printf("Value of x1 : %d\nVlaue of x2 : %d\n",*x1,*x2);
	 
	free(x1);
	free(x2);

	return 0;
}
