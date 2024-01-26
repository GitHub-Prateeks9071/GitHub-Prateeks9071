#include<stdio.h>

void con(char *str1, char *str2, char *res)
{
	int i = 0,j = 0;
	
	while(str1[i] != '\0')
	{
		res[j] = str1[i];
		i++; 
		j++;
	}
	i = 0; 
	while(str2[i] != '\0')
	{
		res[j] = str2[i];
		i++;
		j++; 
	}
	res[j] = '\0';
	
}
int main()
{
	char str1[50],str2[50],res[100];
	printf("Enter str1 = ");
	scanf("%s",str1);
	printf("\nEnter str2 = ");
	scanf("%s",str2);
	con(str1,str2,res);
	printf("\nconcate result is = %s\n",res);
	return 0;
}

