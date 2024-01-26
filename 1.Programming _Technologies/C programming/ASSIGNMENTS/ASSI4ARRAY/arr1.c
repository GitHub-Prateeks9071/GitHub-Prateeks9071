#include<stdio.h>
int main()
{
	int arr[5]; 	
	int i,max,min,sum=0;
	for(i=0;i<5;i++)			//add
	{
		printf("Enter value = ");
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	for(i=0;i<5;i++)        //average
	{
		printf("\n[%d] = %d",i,arr[i]);
	}
	
	min=arr[0];
	for(i=0;i<5;i++)     
	{
		
		
		if(min>arr[i])	 //max
		{
			min=arr[i];			
			
		}
	}
	max=arr[0];
	for(i=0;i<5;i++)  
	{ 
		if(max<arr[i])     //min
		{
			max =arr[i] ;			
			
		}
		
	}
	
	printf("\nAddition = %d",sum);
	printf("\nAverage = %d",sum/5);	
	printf("\nMaximum  = %d",max);
	printf("\nMinimun = %d",min);	
			
}
