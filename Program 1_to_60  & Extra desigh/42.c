#include<stdio.h>
int y(int n);
int main()
{
    int n,sum;
    printf("enter n:\n");
    scanf("%d",&n);
    sum=y(n);
    printf("%d",sum);
    return 0;
}
int y(int n)
{
   int i,sum=0;
   for(i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   return(sum);
}
