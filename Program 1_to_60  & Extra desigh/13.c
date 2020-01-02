#include<stdio.h>
int main()
{

    float da,pf,hra,gross,nt,b,ma=300;
    printf("enter the value of basic=");
    scanf("%f",&b);
    da=b*0.1;
    hra=b*0.075;
    pf=b*0.125;
    gross=b+da+hra+ma;
    printf("\n gross=%f",gross);
    nt=gross-pf;
    printf("\n nt=%f",nt);
    getchar();
}
