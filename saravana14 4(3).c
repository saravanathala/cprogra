#include<stdio.h>
#include<conio.h>
int main()
{
 char str[30];
    int i, length;
    int flag = 0;
   scanf("%s",str);
    length = strlen(str);
    for(i=0;i<length ;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag = 1;
            break;
   }
}
    
    if (flag) {
       printf("no");
    }    
    else {
        printf("yes");
    }
    getch();
    return 0;
}
