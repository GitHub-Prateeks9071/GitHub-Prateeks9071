int numb()
{
	int num;
	printf("Enter , in  how many numbers oeration required\n");
	scanf("%d",&num);
	return num;
}	
int addition(int num)
{
		int add=0,sub=0,i,n;
		printf("Enter the numbers\n =");
		for(i=1;i<=num;i++)
		{		
			scanf("%d",&n);
                	add=add+n;
			sub=sub-n;
		}
		return add;
}
int substraction(int num)		
{
		int sub=0,i,n;
		printf("Enter the numbers\n =");
		for(i=1;i<=num;i++)
		{
			scanf("%d",&n);
			sub=sub-n;
		}
		return sub;			       
}
int multiplication(int num)
{
		int mul=0,i,n;
		printf("Enter the numbers\n =");
		for(i=1;i<=num;i++)
		{
			scanf("%d",&n);
			mul=mul*n;
		}
		return mul;			       
}

int Division(int num)
{
		int i,n;
		int div=1;
		printf("Enter the numbers\n =");
		for(i=1;i<=num;i++)
		{
			scanf("%d",&n);
			div=div/n;
		}
		return div;			       
}

