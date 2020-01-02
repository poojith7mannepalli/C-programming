#include<stdio.h>
int main()
{
    int l_s1=0;
    char i,x,s1[10],s2[10];
    printf("enter the string s1=");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        l_s1++;
    }
    while(l_s1>=0)
    {
        l_s1--;
        s2[x]=s1[l_s1];
        x++;
    }
    s2[x]='\0';
    printf("%s",s2);
    getchar();
}
