#include<stdio.h>

void square(int* x)
{
for(int i=0;i<5;i++)
*(x+i)=*(x+i)**(x+i);
}
void square_arr(int* x)
{
	for(int i=4;i>=0;i--)
	{
	*(x-i)=*(x-i)**(x-i);
	}
}


int main(){
int x;
int arr[5]={10,20,30,40,50};
square(arr);
	for(int i=0;i<5;i++)
	{
	printf("%d\n",arr[i]);
	}
return 0;
	}
