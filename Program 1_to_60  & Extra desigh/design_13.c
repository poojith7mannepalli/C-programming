#include<stdio.h>
int fac(int);
int main()
{
    int i,n;
    float sum=0;
    printf("enter the n:=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+1.0/fac(i);
    printf("sum=%f",sum);
    return 0;
}
int fac(int i)
 {
     int f=1;
     while(i>0)
     {
         f=f*i;
         i--;
     }
     return (f);
 }
