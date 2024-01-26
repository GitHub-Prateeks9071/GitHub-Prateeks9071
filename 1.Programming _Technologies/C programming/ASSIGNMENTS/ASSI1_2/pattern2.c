#include<stdio.h>
int main()

{
int i,j,k;

for(i=1;i<=5;i++)

	{

  		for(j=1;j<i;j++)	// row
			{
			printf(" ");
			}
				for(k=5;k>=i;k--)	//column

					{
					printf("*");
					}
					{
					printf("\n");
				}
	}

return 0;
}
