#include<pthread.h>
#include<stdio.h>

void *routine1(void *msg)
{

    printf("I am from routine 1");
}
int main(int argc , char* argv[])
{
    pthread_t t1;
    pthread_create(&t1,NULL,routine1,NULL);
    pthread_join(t1,NULL);