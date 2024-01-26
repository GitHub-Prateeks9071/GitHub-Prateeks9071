#include<stdio.h>

int occur()
{
	char ch;
	char str[100];
	int i , occurance=0, pos=1;

	printf("Please enter a string");
	scanf("%s",&str);

	printf("Enter the character you want to search for");
	scanf("%c",&ch);

	while(str[i]!='\0')
{
	if(str[i]==ch)
	{
	pos=i;
	pos++;
	i++;
	}
}


}
int main()
{
occur();
return 0;
}
