#include<stdio.h>


int arr[10];  //global array//bss


int main() 
{
		int arr[5];   // declaration//local//main func stack frame
		{

		arr[0]=100;
		arr[1]=200;
		arr[2]=300;
		arr[3]=400;
		arr[4]=500;

		printf("0 -> %d\n",arr[0]);
		printf("1 -> %d\n",arr[1]);
		printf("2 -> %d\n",arr[2]);
		/*printf("Array -> %ls\n",arr[3]);*/

		}	
return 0;
}
