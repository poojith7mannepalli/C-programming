#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a&b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("addition is %d\n",c);
    c=a-b;
    printf("subtraction is %d\n",c);
    c=a*b;
    printf("multiplication is %d\n",c);
    c=a/b;
    printf("division is %d\n",c);
    getch();
}
