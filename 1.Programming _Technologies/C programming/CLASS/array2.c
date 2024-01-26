#include<stdio.h>
int main()
{
int sum;
int arr[6]={10,20,30,40,50,60};

arr[0]=10;
arr[1]=20;
arr[2]=30;
arr[3]=40;
arr[4]=50;
arr[5]=60;

printf("%d\n",arr[0]);
printf("%d\n",arr[1]);
printf("%d\n",arr[2]);
printf("%d\n",arr[3]);
printf("%d\n",arr[4]);
printf("%d\n",arr[5]);


printf("%d\n%d\n%d\n%d\n%d\n%d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);

printf("%d\n",arr[4]+1);
printf("%d\n",arr[4+1]);
printf("%d\n",arr[4]++);
printf("%d\n",++arr[3]);
printf("%d\n",arr[4]);

sum=arr[1]+arr[2]+arr[3];
printf("%d",sum);

return 0;
}
