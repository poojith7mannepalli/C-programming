/*This is a C Program to print a specific pattern*/
#include<stdio.h>
#include<conio.h>

void main() /*Body of Program*/
{
    int i=1,j=1,n;
    printf("How many number of Rows you wanna print? ");
    scanf("%d",&n);

    while(i<=n)
    {
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;

    }
    getch();
}
