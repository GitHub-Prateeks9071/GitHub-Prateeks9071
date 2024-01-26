#include<stdio.h>
int numb()
{
	int num;
	printf("Enter , in  how many numbers oeration required\n");
	scanf("%d",&num);
	return num;
}	
int cal(int num)
{
		int add=0,sub=0,div=0,mul=0,i,n;
		printf("Enter the numbers\n =");
		for(i=1;i<=num;i++)
		{		
			scanf("%d",&n);
                	add=add+n;
			sub=sub-n;
			mul=mul*n;
			div=div/n;
		
		}
}

int main()
		
{		int num;
		int r;
		r=numb();
		cal(num);
		return 0;
}
