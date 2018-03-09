#include<stdio.h>
#include<conio.h>
int main()
{
int a=60,b=30;
printf("before swapping:%d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping:%d %d",a,b);
getch();
return 0;
}
