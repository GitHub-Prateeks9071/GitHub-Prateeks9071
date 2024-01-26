#include<stdio.h>
 int main()

{
int n, i;
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
for(i=1;i<=n;++i){
fact *= i;


printf ("factorial of the given number is%llu",fact);
}


return 0;
}
}
