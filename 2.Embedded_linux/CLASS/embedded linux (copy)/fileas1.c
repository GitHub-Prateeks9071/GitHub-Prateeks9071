#include<stdio.h>
int main(){
	FILE *ps = fopen("data.text","r+");
	fscanf(ps,"%s",data);
	printf("data from file : %s\n",data);
	fprintf(ps,"%s","prateek");
return 0;
}
