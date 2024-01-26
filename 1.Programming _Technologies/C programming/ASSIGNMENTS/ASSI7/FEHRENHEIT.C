//2.Write a program to convert Fahrenheit to celcius

#include<stdio.h>

float F_to_C(float f)
{
	float n = 32, m = 1.8, C;
	C = (f - n) / m;
	return C;
}
int main()
{
	float f;
	printf("Enter Fahrenheit number : ");
	scanf("%f",&f);
	float C = F_to_C(f);
	printf("Celsius number is : %f",C);
	return 0;
}
