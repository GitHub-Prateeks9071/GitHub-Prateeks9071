#include <stdio.h>
 
int main () 
{
    int i,s;
    printf("enter the number");
    scanf("%d",&s);
    for(i=1;i<s;i++)
    {
      for(int j=1;j>s;j++)
      {
        printf("*");
      }

      printf("\n");
    }	

   return 0;
}
