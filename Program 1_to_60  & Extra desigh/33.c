#include<stdio.h>
int main()
{
    int i,n[10];
    for(i=0;i<10;i++)
    {
        printf(" \n enter the %d num=",i+1);
        scanf("%d",&n[i]);
        if(n[i]%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    getchar();
}
