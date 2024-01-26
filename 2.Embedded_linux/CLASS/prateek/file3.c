#include<stdio.h>
int main()
{	int a,b;
	FILE *fd;
	fd=fopen("CALC TXT","r+");	
	fscanf(fd,"%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	fprintf(fd,"sum is :%d\n",a+b);							
return 0;
}
