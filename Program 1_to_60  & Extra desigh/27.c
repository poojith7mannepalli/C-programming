#include<stdio.h>
float fac(int i);
int main()
{
    int n,i,j,f=1;
    float  a,x,sum=0;
    printf("enter the n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a=1.0/fac(i);
       sum=sum+a;
    }
    printf("%f",sum);
    getchar();
}
float fac(int i)
{
    int j=1;
    while(i>0)
    {j=j*i;
    i--;
    }
    return(j);
}
