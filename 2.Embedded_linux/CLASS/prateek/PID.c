#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main (int argc , char* argv[])
{
    pid_t ret;
    printf("--->StaTement before fork -->\n");
    ret =fork();
    printf("--->Statement after fork"-->\n");

}