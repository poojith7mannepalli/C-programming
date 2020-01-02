#include<stdio.h>
int main()
{
    int i,j,a[5],temp=0;
    printf("enter 5 element of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

return 0;
}
