#include<stdio.h>
int fun(int x);
int main()
{
    int num,y;
    printf("Enter the number:\n");
    scanf("%d",&num);
    y=fun(num);
    return y;
}
int fun(int x)
{
    int i,flag=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
