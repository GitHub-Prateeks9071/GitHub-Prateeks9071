//1.Write a program to calculate the area and circumference of circle.

#include<stdio.h>

float area(float radi)
{
	float a = 3.14 * radi * radi;
	return a;
}

float circumference(float radi)
{
	return 2*3.14*radi;	
}

int main()
{
	float radi;
	printf("Enter radius = ");
	scanf("%f",&radi);
	float a = area(radi);
	printf("Area of circle = %f\n",a);
	float c = circumference(radi);
	printf("Circumference of circle = %f\n",c);
	return 0;
}
