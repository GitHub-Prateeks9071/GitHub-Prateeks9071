#include<stdio.h>
int main()
{
	union A
		{
		int x;
		float y;
		double z;
		int arr[2];
};union A a1;
printf("a1.x= sizeof(a1)-> %d\n",sizeof(a1);
return 0;
}
