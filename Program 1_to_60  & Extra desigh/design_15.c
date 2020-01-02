#include<stdio.h>
#include<string.h>
int main()
{
    char ae,s1[10];
    int i,len;
    printf("enter the string:\n");
    scanf("%s",s1);
    len=strlen(s1);
    printf("\n enter char u find");
    scanf("%c",&e);
    for(i=0;i<len;i++)
    {
        if(s1[i]==e)
        {
            printf("th position is %d",i+1);
            f=1;
        }
    }
    if(f==1)
    {
        printf("char does not found");
    }
    return 0;
}

