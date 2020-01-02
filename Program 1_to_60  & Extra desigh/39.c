#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],s1[10],n;
    int k,i,j=0;
    printf("Enter String:\n");
    gets(s);
    printf("Enter a char which u want delete:\n");
    scanf("%c",&n);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=n)
        {
            s1[j]=s[i];
            j++;
        }

    }

    s1[j]='\0';
    puts(s1);
    return 0;

}
