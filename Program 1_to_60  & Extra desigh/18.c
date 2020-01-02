#include<stdio.h>
int main()
{
    int x,n,y,a;
    printf("enter the num x=");
    scanf("%d",&x);
    y=0;
    n=x;
    while(n>0)
    {
        a=n%10;
        y=y*10+a;
        n=n/10;
    }
    printf("reverse=%d",y);
    getchar();
}
