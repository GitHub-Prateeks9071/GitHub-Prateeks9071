/*Q5. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
a) finding length*/

#include<stdio.h>

int str_len(char* str)
{
	int len = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	return i;	
}

int main()
{	
	char name[100];
	scanf("%s",name);
	int len = str_len(name);
	printf("Length of str %s is %d \n",name,len);
	return 0;
}
