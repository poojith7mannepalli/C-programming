#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
char a='A';
printf("enter number :\n");
scanf("%d",&n);
printf("ALPHABAT   VALUE\n");
printf("========   =====\n");
for(i=1;i<=n;i++)
    {
    printf("    %c       %d \n",a+i-1,a+i-1);
    }
    getchar();
}
