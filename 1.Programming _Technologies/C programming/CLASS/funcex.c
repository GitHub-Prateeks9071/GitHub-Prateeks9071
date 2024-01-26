#include<stdio.h>
int fun(int n)
{
if(n==1)
return n;
else 
fun(n);
}
int main()
{
fun(0);
}



