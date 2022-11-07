#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
   printf("enter a num:");
   scanf("%d",&num);
     if(num%7==0 || num%3==0)
         printf("%d is divisible by 7 or 3",num);
     else
        printf("%d is not divisible by 7 or 3",num);
 return 0;
}
