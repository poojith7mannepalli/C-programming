#include<stdio.h>
int main()
{
    int i,x;
    printf("\n enter no to check whether its prime or not:");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("\n %d is not prime",x);
            break;
        }
    }
    if(x==i)
    {
        printf("\n %d is prime",x);
    }

    getchar();
}
