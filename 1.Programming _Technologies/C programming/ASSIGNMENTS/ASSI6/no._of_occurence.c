/*Q5. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
 h)counting no.of occurences of a given character*/

#include<stdio.h>

int fun(char *str, char ch)
{
	int i = 0, pos;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			 pos++;
		}
		i++;
	}	
	return pos;
}

int main()
{
	char ch = 'd';
	char str[100];
	printf("Enter string = ");
	scanf("%s",str);
	int c = fun(str,ch);
	printf("\noccurence of character = %d\n",c);
	return 0;
}
