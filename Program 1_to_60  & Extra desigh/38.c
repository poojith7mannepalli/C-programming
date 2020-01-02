
#include<stdio.h>
int main()
{
    char s1[10],x;
    int i;
    printf("enter char which u want to replace:\n");
    scanf("%c",&x);
    printf("enter the string:\n");
    scanf("%s",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==x)
        {
            s1[i]='g';
        }
    }
    printf("%s",s1);
    return 0;
    }
