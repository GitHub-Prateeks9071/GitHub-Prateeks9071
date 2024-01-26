#include<stdio.h>
#include<stdlib.h>
void square(int *x)
{
	int* y=malloc(sizeof(int));
	(*y)=(*x)*(*x);
return 0;
}
	int main()
{
	void *x=malloc(sizeof(int));
	printf("Enter the data");
	scanf("%d",&x);
	printf("Data %d\n",(int*)x);
	free(x);
return 0;
}
