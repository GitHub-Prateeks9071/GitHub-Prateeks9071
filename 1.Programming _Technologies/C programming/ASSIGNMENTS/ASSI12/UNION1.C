//Q2. Analyse the following code

#include<stdio.h>

int main()
{
	typedef union A
	{
		int x;
		float y;
		double z;
		int arr[2];
	}a1;

	a1.y=6.25f;
	 
	printf("x=%x\n",a1.x);//x=6.250000
	
	a1.z=0.15625;
	 
	printf("%x\n%x\n",a1.arr[1],a1.arr[0]);
	return 0;
}
