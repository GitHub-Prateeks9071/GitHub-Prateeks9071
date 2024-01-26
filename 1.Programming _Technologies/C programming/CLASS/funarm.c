#include<stdio.h>
void funarm(){
int n,temp,sum=0,r;
printf("Enter the  number");
scanf("%d",&n);
temp=n;
while(n>0)
	{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
	}
if(temp==sum)
printf("Armstrong number");
else
printf("Not an Armstrong number");
}

int main()
{
funarm();
return 0;
}

	
		

