#include<stdio.h>
int main()
{
    char s1[10];
    int i;
    printf("enter the string s1:\n");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=s1[i]-32;
    }
    printf("%s",s1);
    return 0;
}
