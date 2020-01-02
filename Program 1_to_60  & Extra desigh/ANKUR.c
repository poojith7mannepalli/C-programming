#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
char c='A';
printf("how many number : \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
   for(k=1;k<=i-1;k++)
   {
   printf(" ");
   }
   for(j=1;j<=n-i;j++)
   {
   printf("%c ",c+i-1);
   }
   printf("\n");
   }
   }

