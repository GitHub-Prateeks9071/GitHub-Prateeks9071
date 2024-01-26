#include<stdio.h>
void funprime()

{
 	int i,n,temp=0;
	printf("Enter the number");
	scanf("%d",&n);

	for(i=2;i<=(n/2);i++)
				{
	  
  		 if(n%i==0)
		{
		temp=1;
       		break;
		}  
				}
				
		if(temp==1)
		{
		printf("The number is not prime");
		 }
   		else
		{
		 printf("The no. is prime");
		}
}				
int main()
{
funprime();
return 0;
}


