/*Q5. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
 i) finding a substring in a main string*/

 #include<stdio.h>

int sub(char *str1, char *str2)
{
	int i = 0, j = 0;
	while(str1[i]  != '\0')
	{
		if(str1[i] == str2[j])
		{
			while(str1[i] != '\0' && str2[j] != '\0')
			{
				if(str1[i] != str2[j])
				{
					break;
				}
				j++;
				i++;	
			}
		}
		if(str2[j] == '\0')
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int main()
{
	char str1[100],str2[100];
	printf("Enter string1 = ");
	scanf("%s",str1);
	printf("Enter string2 = ");
	scanf("%s",str2);
	int c = sub(str1,str2);
	 
	if(c == 1)
	{
		printf("Substring found");
	}
		else{
			printf("Substring not found");
		}
	return 0;
}
