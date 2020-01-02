#include<stdio.h>
#include<stdlib.h>
struct boys
{
    int enm;
    char name[20];
    int marks;
};
int main()
{
    int i,j,n,k,m;
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
        k=strlen(a[j].name);
        m=strlen(a[j+1].name);
        if(k>m)
        {
            strcpy(temp,a[j]);
            strcpy(a[j],a[j+1]);
            strcpy(a[j+1],temp);

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
