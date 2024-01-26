#include<stdio.h>
int main()
{
    int i,j,k;
    int n;
    printf("Enter a number\n"); 
    scanf("%d",&n);
  for(i=1;i<=5;i++)

{
      for(j=1;j<=5-i;j++)
{ 
      printf(" ");
}

      for(k=5;k<=5-i;k--)

{

       printf("%d",n);
}
{
        printf("\n");
        
}
}

return 0;

}