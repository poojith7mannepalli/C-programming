#include <stdio.h>

struct student_record
{
    char name[20];
    char branch[20];
    int total_marks;
} p[10];

int main(void)
{
    int i = 0, n = 10;

    for (i = 0; i < n; i++)
    {
        printf("\n Enter Student Name : ");
        scanf("%s", p[i].name);
        printf("\n Enter Students Branch : ");
        scanf("%s", p[i].branch);
        printf("\n Enter Students Marks : ");
        scanf("%d", &p[i].total_marks);
    }
    printf("namet\t\tbranch\t\tmarks\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\t\t%d\n",p[i].name,p[i].branch,p[i].total_marks);
    }
    return 0;
}
