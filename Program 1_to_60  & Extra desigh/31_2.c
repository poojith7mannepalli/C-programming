#include<stdio.h>
int main()
{
    int i,j;
    char x='A';
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%c",x);
            x++;
        }
        x='A';
        printf("\n");
    }
    getchar();
}
