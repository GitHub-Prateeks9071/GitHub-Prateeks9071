#include<stdio.h>
int main()
{	
	FILE *fd;
	fd = fopen("data.txt","r+");
	char data[100];
	fread(data,10,1,fd);
	printf("data from file: %s\n",dCLEAR

char str[100];
printf("Enter data to write in file :\n");
scanf("%s",&str);
int ret=(fwrite str,10,1,fd);
printf("Return value of ret : %d\n",ret);
	
return 0;
}
