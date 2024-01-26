#include<stdio.h>
int main(){
	const int * p;
int const * p
int * const p = &x;
const int * const p = &x;
*p=20, p++, (*p)++, p=&y;
printf("%d",p);
printf("%d",p++);
printf("%d",(*p)++);
return 0;
}

