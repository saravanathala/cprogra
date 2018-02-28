#include<stdio.h>
#include<conio.h>
int main()
{
	char str[30];
	int k,i=0;
	//printf("Enter the string");
	scanf("%s",str);
	//printf("enter the number");
	scanf("%d",&k);
	while(i<k)
	{
		printf("%s\n",str);
		i++;
	}
  getch ();
  return 0;
}
