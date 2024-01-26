//3.Write a program to convert a given character to uppercase

#include<stdio.h>

int uppercase(char ch)
{
	char upper = ch - 32;
	return upper; 
}

int main()
{
	char ch;
	printf("Enter any small character : ");
	scanf("%c",&ch);
	char upper = uppercase(ch);
	printf("UpperCase of this character is : %c\n",upper);
	return 0;
}
