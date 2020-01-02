#include<stdio.h>
int main()
{
    int i,max=0,nm[10];
    for(i=0;i<10;i++)
    {
        printf("enter %d number=",i+1);
        scanf("%d",&nm[i]);
        if(nm[i]>max)
        {
         max=nm[i];
        }
    }
    printf("max=%d",max);
    getchar();
}

