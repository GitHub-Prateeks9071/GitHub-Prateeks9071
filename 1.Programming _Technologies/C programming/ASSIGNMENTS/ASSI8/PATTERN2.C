void Inverted_Half_Pyramid(int n)
{	 
/*
*****
****
***
**
*
*/
	printf("Inverted Half Pyramid\n");
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void Half_pyramid(int n)
{
	printf("\nHalf Pyramid\n");
/*
*
**
***
****
*****
*/	
	for(int i=0;i<n;i++)
	{	
		for(int k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void Full_Pyramid(int n)
{
	printf("\nFull Pyramid\n");	
/*
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
	for(int i=0;i<n;i++)
	{	
		for(int k=i;k<n-1;k++)
		{
			printf(" ");
		}	
		for(int k=0;k<=i;k++)
		{
			printf("* ");
		}
		 
		printf("\n");
	}
}

void Inverted_Full_Pyramid(int n)
{
	printf("\nInverted Full Pyramid\n"); 
/*
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
*/
	 for(int i=0;i<n;i++)
	{	
		for(int j=0;j<=i;j++)
		{
			printf(" ");
		}	
		for(int k=0 ;k<n-i;k++)
		{
			printf("* ");
		} 
		 printf("\n");
	}
}

void Solid_Half_Diamond(int n)
{
	printf("\nSolid Half Diamond\n");
/*
*
**
***
****
*****
****
***
**
*
*/
	for(int i=1;i<=n;i++)
	{	
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void Solid_Diamond(int n)
{
	printf("\nSolid Diamond\n");
/* 
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/
	for(int i=0;i<n;i++)
	{	
		for(int k=i;k<n-1;k++)
		{
			printf(" ");
		}	
		for(int k=0;k<=i;k++)
		{
			printf("* ");
		}
		 
		printf("\n");
	}
	 
	 for(int i=0;i<n;i++)
	{	
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}	
		for(int k=0 ;k<n-i;k++)
		{
			printf("* ");
		} 
		 printf("\n");
	}
}

void Hollow_Half_Pyramid(int n)
{
	printf("\nHollow Half Pyramid\n");	 
/*
*
**
* *
*  *
*****
*/	 
	int k;
	for(int i=0;i<n;i++)
	{	
			
		for(int k=0 ;k<=i;k++)
		{
			if(k==0||k==i||i==n-1)
			{
				printf("*");
			}
				else{
			  		printf(" ");
				}
		} 
		 
		printf("\n");
	}
}

void Hollow_Inverted_Half_Pyramid(int n)
{
	printf("\nHollow Inverted Half Pyramid\n");
/*
*****
*  *
* *
**
*
*/
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(i==0||j==i||j==n-1)
			{
				printf("*");
			}
				else{
			  		printf(" ");
				} 
		}
		printf("\n");
	}
}

void Hollow_Full_Pyramid(int n)
{
	printf("\nHollow Full Pyramid\n");
/*
    * 
   * * 
  *   * 
 *     * 
* * * * * 
*/	
	
	for(int i=0;i<n;i++)
	{	
		for(int k=i;k<n-1;k++)
		{
			printf(" ");
		}	
		for(int k=0;k<=i;k++)
		{
			if(i==n-1||k==0||k==i)
			{
				printf("* ");
			}
				else{
					printf("  ");
				}
		}
		 
		printf("\n");
	}
}

void Hollow_Diamond(int n)
{
	printf("\nHollow Diamond\n");
/*
    * 
   * * 
  *   * 
 *     * 
*       * 
*       * 
 *     * 
  *   * 
   * * 
    * 
*/
	 
	for(int i=0;i<n;i++)
	{	
		for(int k=i;k<n-1;k++)
		{
			printf(" ");
		}	
		for(int k=0;k<=i;k++)
		{
			if(i==n||k==0||k==i)
			{
				printf("* ");
			}
				else{
					printf("  ");
				}
		}
		 
		printf("\n");
	}int j;
	 for(int i=0;i<n;i++)
	{	
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}	
		for(int k=0 ;k<n-i;k++)
		{
			if(  k==0||k==n-(i+1))
			{
				printf("* ");
			}
				else{
					printf("  ");
				}
			 
		} 
		 	
		 printf("\n");
	}
}

