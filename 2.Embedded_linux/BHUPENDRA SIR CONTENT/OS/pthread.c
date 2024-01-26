/*thread_demo.c
Who has access
System properties
Type
C
Size
1 KB
Storage used
1 KB
Location
Thread-Mutex-semphore
Owner
Bhupendra Pratap singh
Modified
29 Jul 2020 by Bhupendra Pratap singh
Opened
19:52 by me
Created
4 Aug 2020
No description
Viewers can download

//link with -lpthread

/*
Thread routine - argument must be supplied with void *
Routine - I
*/
#include <stdio.h>
#include <pthread.h>
void *msg(void *ptr)
{
    printf("Today is Wednesday\n");
    printf("Routine for thread 1\n");
}
/*
Thread routine - II
*/

void *quote_Of_The_Day(void *ptr)
{
    printf("Success is not an event; it will happen gradually\n");
    printf("Thread -->2\n");
}
void main()
{
        pthread_t thread1, thread2;
        printf("Before Thread\n");
        pthread_create(&thread1,NULL,msg,NULL);
        pthread_create(&thread2,NULL,quote_Of_The_Day,NULL);
	/*
	pthread_join will block the calling thread i.e. main thread
	to complete the execution of thread which is passed as a first arugument
	Note:
	if pthread_join will not be used : It may happen that main thread has complete its execution and some statement doesn't
	yield the results e.g. printf takes time to send buffer data to console
	*/
        pthread_join(thread1,NULL);
        pthread_join(thread2, NULL);
       
        //return 0;

}
