#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int sum(int,int);
int sub(int,int);
int number1, number2;
int main(int argc , char* argv[])
{
pid_t ret;
printf("Enter the number1\n");
scanf("%d",&number1);
printf("Enter the number 2\n");
scanf("%d",&number1);
ret-fork();
 
 if(ret==0)

 printf("cpid= %d\n",getpid());
 printf("ccpid=%d\n",getppid());
int result=sum(number1,number2);



printf("cpi")
}