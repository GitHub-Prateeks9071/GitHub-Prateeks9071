#include<stdio.h>
#include"prateek.h"


int main()
		
{
		int r,add,sub,mul,div;
		r=numb();
		add=addition(r);
		sub=substraction(r);
		mul=multiplication(r);
		div=Division(r);	
		printf("The addition is%d=\n",add);
		printf("The substraction is%d=\n",sub);
		printf("The multiplication is%d=\n",mul);
		printf("The Division is%d=\n",div);
		return 0;
}
