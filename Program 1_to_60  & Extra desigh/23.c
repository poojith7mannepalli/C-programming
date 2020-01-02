#include<stdio.h>
int main()
{
    int i,h,w,count=0;
    for(i=1;i<=5;i++)
    {
        printf("enter h & w for %d person",i);
            printf(" \n enter the h=");
            scanf("%d",&h);
            printf(" enter the w=");
            scanf("%d",&w);
            if(h>170 && w<50)
            {
                count++;
            }
    }
printf(" \n count=%d",count);
getchar();
}

