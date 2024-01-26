#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *p=a;
	int*q=*(&a+1) - 1;
	printf("*p%d\n",*p);
	printf("*q%d\n",*q);
	printf("*p++%d\n",*p++);
	printf("*++p%d\n",*++p);
	printf("(*p)++%d\n",(*p)++);
	printf("++(*p)%d\n",++(*p));
	printf("++(*p)%d\n",++(*p));
	printf("*(p++)%d\n",*(p++));
	printf("*(++p)%d\n",*(++p));
	printf("*q--%d\n",*q--);
	printf("*--q%d\n",*--q);
	printf("--(*q)%d\n",--(*q));
	printf("--*q%d\n",--*q);
	printf("(*q)--%d\n",(*q)--);
	printf("*(q--)%d\n",*(q--));
	printf("*(--q)%d\n",*(--q));
	
return 0;
}
