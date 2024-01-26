#include<stdio.h>
int main()

{
 int i,j,k,c=0;
printf("Enter the number");
scanf("%d",&k);

	for(i=1;i<=k;i++)
	{
	  j=k%i;
   if(j==0)

 {
	c++;
 }
       }
   if(c==2)
{
 printf("The no. is prime");
}
else 

	{
		printf("The no. is not prime");
	}
	
 
return 0;
}

