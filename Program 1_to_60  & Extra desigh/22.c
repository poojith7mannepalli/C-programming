#include<stdio.h>
int main()
{
    int i,j,x,sum=0;
    float avg;
    for(i=1;i<=5;i++)
    {
        printf("\n for student %d\n",i);
     for(j=1;j<=3;j++)
     {
         printf("enter the marks of %d subject=",j);
         scanf("%d",&x);
         sum=sum+x;
     }
     printf(" \n student %d total marks=%d",i,sum);
     avg=sum/3.0;
     printf("   avg=%f",avg);
     printf("\n ___________________________________________________________________________",i);
    }
    getchar();
}
