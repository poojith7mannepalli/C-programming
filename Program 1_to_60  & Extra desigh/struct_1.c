#include<stdio.h>
struct boys
{
    int enm;
    float data;
    int marks;
};
int main()
{
    int i,j,n;
    struct boys a[50],temp;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("\nEnter %d boys enm,data,marks:\n",n);
    for(i=0;i<n;i++)
    {
        printf("enter :[%d]: boys details:::\n",i+1);
        scanf("%d%f%d",&a[i].enm,&a[i].data,&a[i].marks);

    }
    printf("\neno\t\t\tdata\t\t\tmarks\n");
    for(i=0;i<n;i++)
    {
     printf("%d\t\t\t%f\t\t\t%d\n",a[i].enm,a[i].data,a[i].marks);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
    {
        if(a[j].marks>a[j+1].marks)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
    }
    printf("\nafter sorting\n");
    for(i=0;i<n;i++)
    {
     printf("%d\t\t\t%f\t\t\t%d\n",a[i].enm,a[i].data,a[i].marks);
    }
    return(0);

}
