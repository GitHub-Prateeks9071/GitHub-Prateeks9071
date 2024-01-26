#include<stdio.h>
int main(){
	
	enum Keys{UP,DOWN,LEFT,RIGHT};
		// 0,1,2,3

	enum Keys k1 =UP;
	printf("%d\n",k1);

	enum Keys k2 =LEFT;
	printf("%d\n",k2);
return 0;
}
