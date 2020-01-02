#include<stdio.h>
#include<math.h>
int fac(int);
int main()
{
    int i=0,n,x,p;
    float s,sum=0;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter x:\n");
    scanf("%d",&x);
    for(p=0;p<=n;p++)
    {
        if(i==0)
        {
        s=pow(x,p);
        sum=sum+(s/fac(p));
        i=i+1;
        }
        else
        {
            s=pow(x,p);
            sum=sum-(s/fac(p));
            i=0;
           }
        }
    printf("sum=%f",sum);
    return 0;
}
int fac(int p)
{
    int f=1;
    while(p>0)
    {
        f=f*p;
        p--;
    }
    return (f);
}
