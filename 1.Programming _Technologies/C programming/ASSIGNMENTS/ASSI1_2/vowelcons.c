#include<stdio.h>
char main()

{
char a,e,i,o,u,A,E,I,O,U;

char character;
printf("Enter a character");
scanf("%c",&character);

if(character== ('a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'))
{
  printf("The given character is Vowel");

}

else 
{

   printf("The given character is Consonent");

}

return 0;
}


