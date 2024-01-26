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
int b,sockfd,sin_size,con,n,len;    // buffer size 256
char choice_operator;
int num1, num2, result;
if((sockfd=socket(AF_INET,SOCK_STREAM,0))>0)
printf("Socket Created sucessfully\n");

struct sockaddr_in servaddr;

servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
servaddr.sin_port=6006;

sin_size = sizeof(struct sockaddr_in);
if((con=connect(sockfd,(struct sockaddr *) &servaddr, sin_size))==0);   //  initiate a connection on a socket
printf("Connected Sucessfully\n");

printf("Enter the Operator : ");        // choices of operators between +, -, *, /
scanf("%c",&choice_operator);

printf("\nEnter the First Number: ");
scanf("%d", &num1);
printf("\nEnter the Second Number: ");
scanf("%d", &num2);

write(sockfd,&choice_operator,10);
write(sockfd,&num1,sizeof(num1));
write(sockfd,&num2,sizeof(num2));
read(sockfd,&result,sizeof(result));
printf("\nResult from the Server = %d\n", result);
close(sockfd);
}
