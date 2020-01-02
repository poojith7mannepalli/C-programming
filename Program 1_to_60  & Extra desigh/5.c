#include<stdio.h>
int main()
{
   float kilo,feet,inch,centi,mt;
   printf("enter the distance in kilometer=");
   scanf("%f",&kilo);
   mt=kilo*1000;
   feet=mt*3.8084;
   inch=feet*12;
   centi=mt*100;
   printf("\n distance in meter is =%f meter",mt);
   printf("\n distance in feet is =%f feet",feet);
   printf("\n distance in inch is =%f inch",inch);
   printf("\n distance in centi is =%f centi",mt);
   getchar();
}
