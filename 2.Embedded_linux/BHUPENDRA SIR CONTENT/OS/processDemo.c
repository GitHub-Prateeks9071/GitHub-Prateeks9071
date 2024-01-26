
/*Who has access
System properties
Type
C
Size
489 bytes
Storage used
489 bytes
Location
fork-vfork-programs
Owner
Bhupendra Pratap singh
Modified
28 Jul 2020 by Bhupendra Pratap singh
Opened
19:47 by me
Created
28 Jul 2020
No description
Viewers can download

/*
	Handling all possible values of fork system call
	code maintained by : <bhupendra.jmd@gmail.com>

*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t ret;
    ret = fork();
    if (ret == 0 )
    {
        
        printf("Child process is created \n");
    }
    else if(ret>0)
    {
        printf("parent process block\n");
        printf("%d\n",ret);
    }
    else
    {
            perror("child is not created \n");
    }
    
   return 0;
}
