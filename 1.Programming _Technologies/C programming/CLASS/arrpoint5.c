#include<stdio.h>
int main(){
	int array[5];
	int i,sum=0;
	printf("\nEnter array elements 5 integer values:");
	for(i=0;i<5;i++){
		scanf("%d",(array+i));
		sum=sum+ *(array+i);
	}

	printf("%d",sum);

	return 0;
}

