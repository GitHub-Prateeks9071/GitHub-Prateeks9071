//Write a single function to return sum, product of two no.

void input(int a, int b, int *sum, int *mul)
{
	*sum = a + b;
	*mul = a * b;
}

int main()
{
	int a,b,sum,mul;
	printf("a = ");
	scanf("%d",&a);
	 
	printf("b = ");
	scanf("%d",&b);
	 
	input(a,b,&sum,&mul);
	
	printf("Sum is = %d and Mul is = %d",sum,mul);
	return 0;
}
