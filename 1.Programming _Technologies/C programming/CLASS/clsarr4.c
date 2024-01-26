#include<stdio.h>
int str_len(char* str)
{
int len;
int i=0;
while (str[i]!='\0')
{
len++;
i++;
}
return len;
}

int main()
char name[100];
scanf("%s",name);
name[2]='x';
printf("%s",name);

int len= str_len(name);
printf("length of string is %d\n ",name);
int res=str_cmp(name,other);
if(res)
{
printf("string matched\n");
else
{
printf("string is not matched\n");
}
return 0;
}s

