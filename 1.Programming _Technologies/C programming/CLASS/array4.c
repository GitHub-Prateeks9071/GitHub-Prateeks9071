#include<stdio.h>
int main()
{

int n;
printf("Number of elements in the array ");
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The reversed array is\n");

for(i=n-1;i>=0;i--)
{
printf("%d\n",arr[i]);
}
return 0;
}
