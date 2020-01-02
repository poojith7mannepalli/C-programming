
#include<stdio.h>
#include<math.h>
int fac(int);
int main()
{
    float r,rlt=0,i=1;
    int q,s=0,n,x;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter x:\n");
    scanf("%d",&x);
    for(q=0;q<n;q++)
    {   if(s==0)
        {r=pow(x,i);
        rlt=rlt+r/fac(i);
        i=i+2;
        s=1;
        }
        else
        {
            r=pow(x,i);
        rlt=rlt-r/fac(i);
        i=i+2;
        s=0;
        }
    }
    printf("result is = %f",rlt);
    return 0;
}
int fac(int i)
{
    int j=1;
    while(i>0)
    {j=j*i;
    i--;
    }
    return(j);
}
