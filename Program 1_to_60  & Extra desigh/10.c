#include<stdio.h>
int main()
{

  int a,b,c;
  printf("enter the value of a,b,c=");
  scanf("%d \n%d \n%d",&a,&b,&c);
  if(a<c && b<c)
  {
      printf("c is hifhest");
  }
  else if(a<b && c<b)
  {
      printf("b is highest");
  }
  else if(b<a && c<a)
  {
      printf("a is highest");
  }
  getchar();
}
