#include<stdio.h>
#include<conio.h>
int main()
{
int n,a=-1,b=1,c,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("enter the value ");
scanf("%d",&a);
getch ();
return 0;
}
