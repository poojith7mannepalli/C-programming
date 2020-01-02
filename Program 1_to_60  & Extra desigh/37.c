#include<stdio.h>
int main()
{
    char s1[10],x;
    int i,count=0;
    printf("enter char x:\n");
    scanf("%c",&x);
    printf("enter the string:\n");
    scanf("%s",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==x)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
    }
