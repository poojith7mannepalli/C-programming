#include<stdio.h>
struct boys
{
    int enm;
    char name[20];
    int marks;
};
int main()
{
    int i,j,n;
    struct boys a[50],temp;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("\nEnter %d boys details:\n",n);
    for(i=0;i<n;i++)
    {
        printf("enter :[%d]: enm,name,marks:::\n",i+1);
        scanf("%d%s%d",&a[i].enm,a[i].name,&a[i].marks);

    }
    printf("\neno\t\t\tname\t\t\tmarks\n");
    for(i=0;i<n;i++)
    {
     printf("%d\t\t\t%s\t\t\t%d\n",a[i].enm,a[i].name,a[i].marks);
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
     printf("%d\t\t\t%s\t\t\t%d\n",a[i].enm,a[i].name,a[i].marks);
    }
    return(0);

}
