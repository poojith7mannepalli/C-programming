#include<stdio.h>
struct person
{
    char name[20];
    int date,person;
    int salary;
}s[10];
int main()
{
  int i;
  printf("enter information of person:\n");
  for(i=0;i<10;i++)
  {
      s[i].person=i+1;
      printf("\nfor person%d,\n",s[i].person);

      printf("enter name:  ");
      scanf("%s",s[i].name);


      printf("enter date: ");
      scanf("%d%d/%d%d/%d%d",s[i].date);

      printf("\n");
  }
  printf("dispaly information:\n",i+1);
  printf("\n name: %d\n",s[i].name);
  printf("date: ");
  return 0;
}
