#include<stdio.h>
int main()
{
int sum=0,i,n;
int arr[n-1];
printf("Enter the size of array");
scanf("%d",&n);
//int arr[6]={10,20,30,40,50,60};
	for(i=0;i<n;i++)
	{
		printf("Arr[%d] = ",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];	
	}
	
	printf("The addition of numbers is : %d",sum);
		
return 0;
}
