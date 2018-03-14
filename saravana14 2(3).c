#include<stdio.h>
#include<conio.h>
int main()
{
int p,q;
printf("enter the p & q values");
scanf("%d%d",&p,&q);
if((p-q)%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
return 0;
}
