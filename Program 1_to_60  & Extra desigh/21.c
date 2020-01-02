#include<stdio.h>
int main()
{
    int i,a,x,sum=0;
    float avg;
    printf("enter the x=");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("enter the %d=",i);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("sum=%d",sum);
    avg=sum/x;
    printf("\navg=%f",avg);
    getchar();
}
