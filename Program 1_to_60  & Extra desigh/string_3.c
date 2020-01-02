#include<stdio.h>
int main()
{
    int l_s1=0,l_s2=0;
    char i,s1[10],s2[10],s3[100];
    printf("enter the string s1=");
    scanf("%s",s1);
    printf("enter the string s2=");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        l_s1++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        l_s2++;
    }
    for(i=0;i<l_s1;i++)
    {
        s3[i]=s1[i];
    }
    for(i=0;i<l_s2;i++)
    {
        s3[l_s1+i]=s2[i];
    }
    s3[l_s1+l_s2]='\0';
    printf("%s",s3);
    getchar();
}
