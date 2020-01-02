#include<stdio.h>
#include<string.h>
void upper(char s[]);
int main()
{
    char s[20];
    printf("Enter string:\n");
    gets(s);
    upper(s);
    return 0;
}
void upper(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>96&&s[i]<123)
            s[i]-=32;
    }
    printf("uppercase=%s",s);
}
