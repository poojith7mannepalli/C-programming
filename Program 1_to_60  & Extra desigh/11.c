#include<stdio.h>
int main()
{
 char x;
 printf("enter the number x=");
 scanf("%c",&x);
 if(x>='A'&&x<='Z')
 {
     printf("enter value is capital letter");
 }
 else if(x>='a'&&x<='z')
 {
     printf("enter value is small letter");
 }
 else if(x>='0'&&x<='9')
 {
     printf("enter value is number");
 }
 else
 {
     printf("enter the char is special  character ");

 }
getchar();
}
