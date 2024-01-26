#include<stdio.h>

int* test(int x)
{
	int y = x * x;
	return &y;//function returns address of local variable is not a solution it get 0 output, return y for the solution. 
}

int main()
{
	int x=2;
	int y = test(x);
	printf("value is = %d",y);
	return 0;
}
