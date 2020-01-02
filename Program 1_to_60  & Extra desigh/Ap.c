#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
char a='A';
printf("how many number : \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
     for(k=1;k<=i-1;k++)
     {
         printf(" ");
     }
   for(j=1;j<=n-i+1;j++)
       {
           if(i%2==0)
           {
            printf(" %c",a+j-1);

           }
            else
            {
                printf(" *");
            }
       }
            printf("\n");
       }
       }
