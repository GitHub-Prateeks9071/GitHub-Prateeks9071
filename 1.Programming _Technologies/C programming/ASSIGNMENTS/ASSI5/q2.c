#include<stdio.h>
int main(){
	int row=0,col=0;
	int a[2][2];
	int d;
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
					printf("enter the element\n");
					scanf("%d",&a[row][col]);
					}
				printf("\n");
				}
				d=a[0][0]*a[1][1]-a[1][0]*a[0][1];
				printf("%d\n",d);
				return 0;
			}

