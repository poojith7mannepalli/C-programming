#include<stdio.h>
int main()
{
    int i,x,n,sum=0;
    printf("enter the n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     x=i*i;
     sum=sum+x;
    }
 printf("sum=%d",sum);
getchar();
}


