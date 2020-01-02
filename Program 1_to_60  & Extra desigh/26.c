#include<stdio.h>
int main()
{
    int n,i;
    float x,sum=0;
    printf("enter the n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=1.0/i;
        sum=sum+x;
    }
    printf("sum=%f",sum);
    getchar();
}



