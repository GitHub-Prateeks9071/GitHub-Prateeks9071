void funpatlast()

{
int i, j, n , k, l;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)  //no of rows


{

   for(j=1;j<=n-i;j++)    //For printing 1 
{
	printf("1");
}
	for(k=1;k<=2*i-1;k++)  // for printing *
{
 	printf("*");
}

 	for(l=1;l<=n-i;l++)  // For printing 1

{
	printf("1");
}
	{
		printf("\n");
	}

}
}

int main()
{
funpatlast();
return 0;
}
