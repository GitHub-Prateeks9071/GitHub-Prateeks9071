#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <arpa/inet.h>

// Start of entry point function

void main()
{
int b,sockfd,connfd,sin_size,l,n,len;
char choice_operator;
int num1, num2, result;
if((sockfd=socket(AF_INET,SOCK_STREAM,0))>0)
printf("Socket Created Sucessfully\n");         // Socket Creation

struct sockaddr_in servaddr;
struct sockaddr_in clientaddr;

servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
servaddr.sin_port=6006;

if((bind(sockfd, (struct sockaddr *)&servaddr,sizeof(servaddr)))==0)
printf("Binded Sucessfully\n");         //  bind() assigns the address

if ((listen(sockfd,5))==0)              //  listen for connections on a socket
printf("Listened Sucessfully\n");

sin_size = sizeof(struct sockaddr_in);
if((connfd=accept(sockfd,(struct sockaddr *)&clientaddr,&sin_size))>0);
printf("Accepted Sucessfully\n");

read(connfd, &choice_operator,10);
read(connfd,&num1,sizeof(num1));
read(connfd,&num2,sizeof(num2));

switch(choice_operator)
{
        case '+':
                result = num1 + num2;
                printf("\nResult = %d + %d = %d\n",num1, num2, result);
                break;
        case '-':
                result = num1 - num2;
                printf("\nResult = %d - %d = %d\n",num1, num2, result);
                break;
        case '*':
                result = num1 * num2;
                printf("\nResult = %d * %d = %d\n",num1, num2, result);
                break;
        case '/':
                result = num1 / num2;
                printf("\nResult = %d / %d = %d\n",num1, num2, result);
                break;
        default:
                printf("\nERROR: Invalid Operation\n");
}

write(connfd,&result,sizeof(result));
close(sockfd);
}
