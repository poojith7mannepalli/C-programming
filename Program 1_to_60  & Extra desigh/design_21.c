#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=2;i<=7;i++)
    {
        for(k=2;k<=8-i;k++)
            printf(" ");
        {
            for(j=2;j<=i;j++)
            {
                if(i%2==0)
                printf("# ");
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
}
