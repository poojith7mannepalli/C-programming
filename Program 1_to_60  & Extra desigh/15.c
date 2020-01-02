#include<stdio.h>
int main()
{
    int i,x,max=0,min=9999;
    for(i=0;i<10;i++)
    {
        printf("enter the number x=");
        scanf("%d",&x);
        if(x>max)
        {
            max=x;
        }
        if(x<min)
        {
            min=x;
        }
    }
    printf("\n max=%d \n min=%d",max,min);
    getchar();
}
