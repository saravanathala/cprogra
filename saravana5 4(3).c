#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t,n1,n2,n3,n4;
	printf("ENTER THE INPUT NUMBER\n");
	scanf("%d",&n);
if(t!=0)
	{
		n1=t/100;
		n2=t%100;
		n3=n2/10;
		n4=n2%10;
	}
	printf("THE NOS IN THE INPUT NUMBER IS\nd%d\n%d\n%d",n1,n3,n4);
  getch();
  return 0;
  }
