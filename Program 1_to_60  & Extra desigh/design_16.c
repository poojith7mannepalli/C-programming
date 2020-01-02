#include<stdio.h>
int fac(int i);
int main()
{
    int n,f;
    printf("enter num n:=");
    scanf("%d",&n);
    f=fac(n);
    printf("f=%d",f);
    return 0;
}
int fac(int i)
{
    int j=1;
    if(i==1)
        return(1);
    j=i*fac(i-1);
    return(j);
}
