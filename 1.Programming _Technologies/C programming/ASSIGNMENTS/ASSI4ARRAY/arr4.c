#include<stdio.h>

int main()
{
	int arr[5];
	int i,j=0,k=5-1,temp;
	for(i=0;i<5;i++)
	{
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("[%d] = [%d] \n",i,arr[i]);
	}
	printf("Reverce is\n");	
	while(j<k)
	{
		temp = arr[j];
		arr[j] = arr[k];
		arr[k] = temp;
		j++;
		k--;	
	}	
	for(i=0;i<5;i++)
	{
		printf("[%d] = [%d] \n",i,arr[i]);
	}
return 0;
}
