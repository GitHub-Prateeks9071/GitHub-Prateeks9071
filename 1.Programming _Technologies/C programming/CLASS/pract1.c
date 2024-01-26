#include<stdio.h>
void func(int a, int b) //funtion definition
{
	a++;
	b--;
	printf("a=%d , b=%d\n",a,b);
}
  //function declaration
int main(void)
{
	int x=10,y=34;
	func(x,y);	//function calling
	printf("x=%d , y=%d\n",x,y);
	return 0;
}

