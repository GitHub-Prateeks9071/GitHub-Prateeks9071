struct A
{
int x;
char *str; // (or) char str[20];
};
struct A a1 = { 101, “abc” } , a2;
typedef struct A a1;
a1.x=10;
a1.str=”hello”; //works?
scanf(“%d%s”,&a1.x,a1.str);
return 0;
}
