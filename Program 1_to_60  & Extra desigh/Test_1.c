#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    FILE *fp;
    fp=fopen("Deep.txt","w");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    printf("\nenter string");
    gets(s);
    for(i=0;i<100;i++)
        fputc(s[i],fp);
    getch();
    fclose(fp);
    getch();
}
