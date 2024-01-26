#include<stdio.h>
int main()
{
int arr[5];
arr[0]=10;
arr[1]=20;
arr[2]=30;
arr[3]=40;
arr[4]=50;

printf("arr = %x(Hex)%lu(long int) size = %d\n",arr);
printf("&arr= %lu\n",&arr,&arr,sizeof(arr));
printf("*arr= %lu\n",*arr,*arr);
return 0;
}
