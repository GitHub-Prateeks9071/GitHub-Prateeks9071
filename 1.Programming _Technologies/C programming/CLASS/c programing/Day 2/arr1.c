#include<stdio.h>
int main()
{	
	int i,j,n,temp;
	printf("The no of elements you want to print : ");
	scanf("%d",&n);
	int arr[5];
	printf("array elements : \n");
	
	for(i=0 ;i<n;i++)
		{
				scanf("%d",&arr[i]);		
		}
	

		while(i<j)
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j++;	
			
			}	
			printf("%d",temp);
		for(i=0 ;i<n;i++)
			{
				printf("%d",arr[i]);
			}

return 0;
}

				






