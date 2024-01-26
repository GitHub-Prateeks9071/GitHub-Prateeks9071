//5.Write a program to implement a interest calculator

#include<stdio.h>

float Interest(float p, float r, float t)
{
	float i = p * r * t / 100;
	return i; 
}
int main()
{
	float p, r, t;
	printf("Enter principle : ");
	scanf("%f",&p);
	printf("Enter rate of interest : ");
	scanf("%f",&r);
	printf("Enter time : ");
	scanf("%f",&t);
	float i = Interest(p, r, t);
	printf("Interest is : %f\n",i);
	return 0;
}
