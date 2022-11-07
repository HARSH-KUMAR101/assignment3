#include<stdio.h>
#include<conio.h>
int main()
{
 char alph;
   printf("enter a character:");
   scanf("%c",&alph);
     if(alph>='a' && alph<='z')
        printf("%c is lowercase alphabet",alph);
     else
        printf("%c is a uppercase alphabet",alph);
return 0;
}
