#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],max,i,n;
max=a[0];
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
printf("%d",max);
getch();
return 0;
}
}
