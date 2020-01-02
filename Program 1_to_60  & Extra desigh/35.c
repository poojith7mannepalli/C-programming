#include<stdio.h>
int main()
{
    int a[10],i,sum=0,n;
    float avg;
    printf("enter n:=");
    scanf("%d",&n);
    printf("enter element of array\n");
    for(i=0;i<n;i++)
    {
        printf("enter %d element=",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    avg=sum/n;
    printf("\tavg=%f",avg);
}
