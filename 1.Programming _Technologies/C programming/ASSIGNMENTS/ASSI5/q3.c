#include<stdio.h>
int arr[3][3];
int flag=0;
int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("enter the element\n");
			scanf("%d",&arr[i][j]);
			}
		}
	   for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
			if(i==j&&arr[i][j]==1){
				flag=1;
				}
				else
			if(i!=j&&arr[i][j]==0){
				flag=1;
				}
			}
		}
	if(flag==1){
	printf("entered matrix is identity\n");
	}
	if(flag==0){
	printf("entered matrix is non-identity\n");
	}
	return 0;
}

