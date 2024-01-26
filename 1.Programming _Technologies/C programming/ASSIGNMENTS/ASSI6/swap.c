//Q2. Write a function to swap two variables using Pass by value, Pass by reference

#include<stdio.h>

void input(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;//it get the output 0 beacuse pass by value is not return anything in this.
}

void output(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a=10,b=20;
	input(10,20);
	output(&a,&b);
	printf("value of a = %d and value of b = %d\n",a,b);
	return 0;
}
