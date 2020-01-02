#include<stdio.h>
int main()
{
    int a[50],i,n,p,s,temp;
    printf("enter how many elemnt n:");
    scanf("%d",&n);
    printf("\nenter [%d]element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter poisition p:");
    scanf("%d",&p);
    for(i=n;i>=p;i--)
    {
        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
        if(i==p)
        {
            printf("enter numbe ");
            scanf("%d",&s);
            a[p]=s;
        }
    }
    for(i=0;i<n+1;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }

}
