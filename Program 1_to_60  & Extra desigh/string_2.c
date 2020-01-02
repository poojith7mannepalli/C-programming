#include<stdio.h>
int main()
{
    int l_s1=0,l_s2=0;
    char i,s1[10],s2[10],flag=0;
    printf("enter string s1=");
    scanf("%s",s1);
    printf("enter string s2=");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        l_s1++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        l_s2++;
    }
    if(l_s1!=l_s2)
    {
        printf("string are not same");
    }
    else
    {
        for(i=0;i<l_s1;i++)
        {
            if(s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("not same");
        }
        else
        {
            printf("same");
        }
    }

    getchar();
}
