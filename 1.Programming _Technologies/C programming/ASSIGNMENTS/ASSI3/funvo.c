#include<stdio.h>
char vowel(char ch)
{
	
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{	
		printf("\n%c is a vowel",ch);
}
	else
{		
		printf("\n%c is not a vowel",ch);
}
	return 0;
}

int main()
{
	char ch;
	printf("Enter a character ");
	scanf("%c",&ch);
	vowel(ch);
	return 0;
}
