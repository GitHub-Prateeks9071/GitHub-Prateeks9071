#include<stdio.h>




int str_len(char* str ){ // string, return length
//	int len = 0;
	int i = 0;	
	while(str[i] != '\0'){
//		len++;
		i++;
	}

	return i;
}


int str_cmp(char* str1, char* str2){
	int i=0;
	while (str1[i] != '\0'){
		if( str1[i] != str2[i] ){
			break;
		}
		i++;
	}
	if( str1[i] == '\0' && str2[i] == '\0'){
		return 1; //true
	} 
	return 0; // false
}




int main(){
	//array of chars
	//Format Specifier For strings
	char name[100];
	char other[100];
	scanf("%s",name);
	scanf("%s",other);
//	name[2] = 'x';
	printf("%s",name);


	int len = str_len(name);
	printf("\nLength of str %s is %d \n",name,len);
	
	int res = str_cmp(name,other);
	if(res){
		printf("String matched\n");
	}else{
		printf("String not matched\n");
	}
		
	
	return 0;
}













