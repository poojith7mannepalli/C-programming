#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    FILE *fp;
    fp=fopen("deep.txt","w");
    if(fp==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    printf("enter a string\n");
    gets(s);
    for(i=0;i<10;i++)
        fputc(s[i],fp);
    getch();
    fclose(fp);
    getch();
}
