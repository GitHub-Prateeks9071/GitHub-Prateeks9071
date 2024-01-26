#include<stdio.h>
void swap(int *,int *);        
 
void main( )
{
    	int n1,n2;
	printf(" Enter the numbers to be swapped");
	scanf("%d%d",&n1,&n2);
	
	printf("The numbers before swapping are :n1=%d n2=%d ",n1,n2);
	swap(&n1,&n2);
	printf("The numbers after swapping are: n1=%d n2=%d ",n1,n2);
}

void swap(int *n1 , int *n2)
{
int temp;
temp = *n1;
*n1=*n2;
*n2=temp;
 printf("The numbers after swapping are: n1=%d n2=%d ",n1,n2);
}



return 0;
}
