#include<stdio.h>
#include<math.h>
int fac(int x);
int main()
{
    int i=1,n,x,s=0;
    float p,sum=0;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter x:\n");
    scanf("%d",&x);
    while(i<=n)
    {
        if(s==0)
        {
        p=pow(x,i);
        sum=sum+(p/fac(i));
        s=1;
        i=i+2;
        }
    else
    {
        p=pow(x,i);
        sum=sum-(p/fac(i));
        s=0;
        i=i+2;
    }
    }
    printf("sum=%f",sum);
    getchar();
}
int fac(int x)
{
    int f=1;
    while(x>0)
    {
        f=f*x;
        x--;
    }
    return(f);
}
