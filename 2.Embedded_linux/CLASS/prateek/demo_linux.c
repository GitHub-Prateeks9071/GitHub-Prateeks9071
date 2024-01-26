#include<stdio.h>
#include<unistd.h>
int main(int argc , char * argv[])
{
for(int count=0; count <10; count++)
{
    fork();
    printf("Basic process creation in c\n");
    sleep(2);   //blocking
}

return 0;

}
