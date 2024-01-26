//Q2. WAP to Test arithmetic operation on void pointers

#include<stdio.h>

int main()
{
	void *x1 = 10;
	void *x2 = 20;
	int y;
	int z = &x1;
	
	printf("&z=%d\nz++=%d\n++z=%d",&z,z++,++z);

	/*y = x1 + x2;//invalid operands to binary + (have ‘void *’ and ‘void *’)
	printf("Sum is : %d",y); 
	 

	*y = *x1 * *x2;//void value not ignored as it ought to be
	printf("Mul is : %d",y);*/

	 

	return 0;
}
