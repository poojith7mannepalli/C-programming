#include<stdio.h>
void y(int x,int y);
int main()
{
    int a,b;
    printf("enter the a&b\n");
    scanf("%d%d",&a,&b);
    y(a,b);
    return 0;
}
void y(int x,int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    printf("%d  %d",x,y);
}
