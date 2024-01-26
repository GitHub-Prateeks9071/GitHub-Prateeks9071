#include<stdio.h>
int main()
{
double celcius,fehrenheit;
printf("Enter Temperature in fehrenheit : ");
scanf("%lf",&fehrenheit);
celcius=(fehrenheit-32)*(float)5/9;
printf("The temperature in celcius is : %lf\n",celcius);
return 0;
}


