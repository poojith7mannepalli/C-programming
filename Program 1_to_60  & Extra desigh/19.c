#include<stdio.h>
  int main()
{
    int a,b,c,i,x;
    printf("enter the x=");
    scanf("%d",&x);
    a=0;
    b=1;
    printf("%d \t %d",a,b);
    for(i=0;i<x-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t %d",c);
    }
    getchar();
}
