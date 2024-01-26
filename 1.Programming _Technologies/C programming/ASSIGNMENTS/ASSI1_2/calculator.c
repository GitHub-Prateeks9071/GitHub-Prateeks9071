#include<stdio.h>


int main()

{
	float a, b, c ; 
	printf("Enter the numbers :\n");
	scanf("%f%f",&a,&b);
	
	c=a+b;
		{
			printf("The sum of numbers = %.3f\n",c);
		}


	c= a-b;
		{
			printf("The substraction of numbers = %.4f\n",c);
		}


	c= a*b;
		{
		printf("the product of numbers = %.3f\n",c);
		}


	c=a/b;
		{
			printf("the product of numbers = %.6f\n",c);
		}


		{
			printf("the square of numbers = %.3f\n%.3f\n",a*a,b*b);
		}


/*c=a%b;
{
printf("the remainder of numbers = %lf\n",c);
}*/
return 0;
}




