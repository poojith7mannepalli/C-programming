#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("enter the x=");
    scanf("%d",&x);
    a=x%10;
    while(x>10)
    {
        b=x/10;
        x=b;
    }
    c=a+b;
    printf("c=%d",c);
    getchar();
}

