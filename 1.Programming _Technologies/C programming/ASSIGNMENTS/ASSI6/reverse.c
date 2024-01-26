/*Q5. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
d) reversing in memory*/

#include<stdio.h>

void rev(char *str)
{
	int i = 0, j = 0, temp = 0, len = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	while(j<len)
	{
		temp = str[j];
		str[j] = str[len];
		str[len] = temp;
		j++;
		len--;
	}
}
int main()
{
	char str[100];
	printf("Enter string = ");
	scanf("%s",str);
	rev(str);
	printf("Reverse string is = %s\n",str);
	return 0;
}
