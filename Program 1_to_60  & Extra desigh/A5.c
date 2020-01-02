#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
while(i>10)
  {
  for(j=1;j<=10;j++)
    {
    if(i%j==0)
    j++;
    }
   i++;
  }
printf("%d",i);
getch();
}
