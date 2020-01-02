#include<stdio.h>
int main()
{

     int d,u,t,a;
     printf("enter the starting distance u=");
     scanf("%d",&u);
     printf("enter the accelaration a=");
     scanf("%d",&a);
     printf("enter the time taken by object t=");
     scanf("%d",&t);
     d=(u*t)+(a*t*t);
     printf("the distance travelled by object is=%d",d);
     getchar();
}
