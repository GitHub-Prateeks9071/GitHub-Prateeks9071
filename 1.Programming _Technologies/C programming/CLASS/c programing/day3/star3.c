#include<stdio.h>
 
int main () 
{
    int i,s,k;
    printf("enter the number");
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
      for(int j=i;j<s;i++)
      {
        printf("*");
      }

	for(k=1;k<=i;k++)
	{
	  printf("%d",k);
	}
      printf("\n");
    }	

   return 0;
}
