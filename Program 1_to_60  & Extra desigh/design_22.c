#include<stdio.h>
int main()
{
    int i,x,a[10],sum=0;
    float avg;
    printf("enter x=");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter the %d element",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d\n",sum);
    avg=sum/x;
    printf("avg=%f",avg);
    getchar();
}

