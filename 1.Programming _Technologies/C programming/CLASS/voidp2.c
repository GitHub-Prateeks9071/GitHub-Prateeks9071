#include<stdio.h>
int main()
{
void *x;
void *y;
int a,b,plus,minus,div,mul;
printf("enter athe values of x and y");
scanf("%d	 %d",&a,&b);
x=&a;
y=&b;
plus= (*(int*)x)+(*(int*)y);
minus= (*(int*)x)-(*(int*)y);
mul = (*(int*)x)*(*(int*)y);
div= (*(int*)x)/(*(int*)y);

printf("The addition = %d\n",plus);
printf("The substraction = %d\n",minus);
printf("The multiplication = %d\n",mul);
printf("The division = %d\n",div);

return 0;
}
