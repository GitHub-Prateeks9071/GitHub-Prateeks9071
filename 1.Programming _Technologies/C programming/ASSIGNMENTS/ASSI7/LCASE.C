//3.Write a program to convert a given character to lowercase

#include<stdio.h>

int lowercase(char ch)
{
	char lower = ch + 32;
	return lower; 
}

int main()
{
	char ch;
	printf("Enter any capital character : ");
	scanf("%c",&ch);
	char lower = lowercase(ch);
	printf("LowerCase of this character is : %c\n",lower);
	return 0;
}
