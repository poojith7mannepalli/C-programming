#include<stdio.h>
int main()
{
    int x=0;
    char i,name[10];
    printf("enter the name=");
    scanf("%s",name);
    while(name[i]!='\0')
    {
        x++;
        i++;
    }
    printf("length of string is=%d",x);
    getchar();
}
