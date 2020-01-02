#include<stdio.h>
int main()
{
    int p,r,n,i;
    printf("enter principal amount=");
    scanf("%d",&p);
    printf("enter rate of interest=");
    scanf("%d",&r);
    printf("enter number of years=");
    scanf("%d",&n);
    i=(p*r*n)/100;
    printf("the simple interest=%d",i);
    getch();
}
