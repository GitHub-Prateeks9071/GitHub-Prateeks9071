/*Q5. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
 e) finding first occurrence of given character*/

#include<stdio.h>

int fun(char *str, char ch)
{
	int i = 0, pos = -1;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			pos = i;
			break;	
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
	printf("\noccurence of character = %d",c);
	return 0;
}
