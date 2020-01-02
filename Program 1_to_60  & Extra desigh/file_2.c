#include<stdio.h>
int main()
{
    int i;
    char s1[10];
    FILE *fp;
    fp=fopen("d_1.txt","w");
    if(fp==NULL)
    {
        printf("file can not display");
        exit(1);
    }
    printf("enter string");
    scanf("%s",s1);
    for(i=0;i<strlen(s1);i++)
        fputc(s1[i],fp);
    getch();
    fclose(fp);
    getch();
}


























