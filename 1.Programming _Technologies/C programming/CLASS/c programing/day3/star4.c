#include <stdio.h>
 
int main () 
{
    int i,s;
    printf("enter the number");
    scanf("%d",&s);
    for(i=s;i>1;i++)
    {
      for(int j=1;j>=i;j++)
      {
        printf("*");
      }
      printf("\n");
    }	

   return 0;
}
