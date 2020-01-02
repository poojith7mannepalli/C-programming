#include<stdio.h>
int main()
{
    int x,i,f=1;
    printf("enter the num x=");
    scanf("%d",&x);
    for(i=1;i<x;x--)
    {
        f=f*x;
    }
    printf("f=%d",f);
    getchar();
}
