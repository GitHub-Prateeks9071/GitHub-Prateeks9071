#include<stdio.h>
#include<strings.h>

void str_length()
{
	int i=0,len=0;
	while(str[i] != '/0')
	{
		len++;
		i++;
	}
	return i;
} 
void ispalindrome()
{
	int i=0;
	char temp,sum;
	temp=str;
	while(str[i] != '/0')
	{
		sum=sum+'/0';
		if(sum==temp)
		{
			printf("\nEntered String is Palindrome");
		}
		else
		{
			printf("\nEntered String is not Palindrome");
		}
		i++;
	}
}
void reverse()
{
	int i=0;
	while(str[i] != '/0')
	{
		printf("\nString in upper case : ",toupper(str));
		printf("\nString in lower case : ",tolower(str));
		i++;
	}
}
void menu()
{
	int ch;
	printf("\n[1] To check the input string is palindrome or not");
	printf("\n[2] To convert the string's alphabets to reverse case");
	printf("\n[3] Exit");
	printf("\nEnter a Choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			ispalindrome();
		}
		case 2:
		{
			reverse();
		}
		case 3:
		{
			break;
		}
		default:
		{
			printf("\nWrong Choice!!! Please make correct choice...");
		}	
}
int main()
{
	int i;
	char str;
	printf("\nEnter a String : ");
	scanf("%s",str);
	menu();
	return 0;
}
