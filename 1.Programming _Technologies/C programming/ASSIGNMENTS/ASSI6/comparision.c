/*Q5. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
c) comparision*/

#include<stdio.h>


int str_camp(char* str1, char* str2)
{
	int i=0;
	while(str1[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			break;		
		}
		i++;
	}
	if(str1[i]=='\0' && str2[i] == '\0')
	{
		return 1;//true
	}
	return 0;//false
}

int main()
{	 char name[100];
	char other[100];
	scanf("%s",name);
	scanf("%s",other);
	 
	int res = str_camp(name,other);
	if(res)
	{
		printf("String is matched\n");
	}
		else{
			printf("String is not matched\n");	
		}
	return 0;
}
