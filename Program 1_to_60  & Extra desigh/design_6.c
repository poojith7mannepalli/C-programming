#include<stdio.h>
int main()
{
    int i,j,k,a[2][2],b[2][2],c[2][2],sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the a[%d][%d]\n",i,j);
            scanf("%d",a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
           {
            printf("enter the b[%d][%d]\n",i,j);
            scanf("%d",b[i][j]);
           }
        }
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
         {
                for(k=0;k<2;k++)
                {
                  sum=sum+a[i][j]*b[k][j];
                 }
         }
    }
         c[i][j]=sum;
         printf("c[%d][%d]=%d\n",i,j,c[i][j]);
getchar();+
}
