#include<stdio.h>
int main()
{
	float area, circum ,radius;
	printf("The area of circle is = ");
	scanf("%f",&radius);
	area = (3.14*radius*radius);
	circum = (2*3.14*radius);

	printf("The area of circle = %f\n",area);
	printf("The circumference of circle is = %f\n",circum);
return 0;
	
}
