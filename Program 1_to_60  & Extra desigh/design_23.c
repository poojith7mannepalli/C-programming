#include<stdio.h>
int main()
{
    int a[5][3],i,j,x,sum=0;
    float avg;
    for(i=0;i<5;i++)
    {
        printf("for %d student\n",i+1);
        {
            for(j=0;j<3;j++)
            {
                printf("enter %d subject marks",j+1);
                scanf("%d",&a[i][j]);
                sum=sum+a[i][j];
            }
            printf("%d student marks=%d\t",i+1,sum);
            avg=sum/3;
            printf("avg=%f",avg);

        }
        printf("\n");
    }
    getchar();
}
