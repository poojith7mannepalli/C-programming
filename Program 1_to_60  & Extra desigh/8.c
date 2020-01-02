#include<stdio.h>
int main()
{

    int x;
    printf("enter the value of x=");
    scanf("%d",&x);
    if (x>0)
    {
        printf("enter the number is positive");
    }
    else if(x<0)
    {
        printf("enter the number is negative");
    }
    else
    {
        printf("enter the number is zero");
    }
    getchar();
}
