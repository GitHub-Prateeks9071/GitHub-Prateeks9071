#include<stdio.h>
int factorial()

{
int i,n;
unsigned long long fact = 1;
{
printf("Enter the given number");
scanf("%d",&n);
}

if(n<0)
{
printf("The given number is invalid");
}


else{
for(i=1;i<=n;++i)
{
fact *= i;
}
printf ("factorial of the given number is%llu : \n",fact);

return fact;
}
}

int main()
{
factorial();  //function calling
return 0;
}
