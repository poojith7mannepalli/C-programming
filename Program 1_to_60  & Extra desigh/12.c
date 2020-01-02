#include<stdio.h>
int main()
{

    int x=0;
    printf("enter the marks=");
    scanf("%d",&x);
    if(x>=80)
    {
        printf("distinction");
    }
    else if(79>=x && x>=60)
    {
        printf("First class");
    }
    else if(59>=x && x>=40)
    {
        printf("Second class");
    }
    else
    {
        printf("Fail");
    }
    getchar();
}
