#include<stdio.h>

int main()
{
    int x;
    printf("enter an integer num=");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("integer num is even");

    }
    else
    {
        printf("integer num is odd");
    }
    getchar();
}
