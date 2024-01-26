#include<stdio.h>
int main()
{
	int lowercase, uppercase;
	char c;
	
	printf("enter alphabet");
	scanf("%c",&c);
	lowercase=(c=='a' || c=='e'  || c=='i' || c=='o' || c=='u' );
	uppercase=(c=='A' || c=='E'  || c=='I' || c=='O' || c=='U' );
	if(lowercase || uppercase)
	printf("%c is a vowel ",c);
	else
	printf("%c is consonant",c);
	return 0;
}
	
