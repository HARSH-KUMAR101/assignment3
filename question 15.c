#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
   printf("enter a num:");
   scanf("%d",&num);
     if(num<0)
        printf("%d is negative",num);
     else if(num>0)
        printf("%d is positive",num);
     else
        printf("number is zero");
 return 0;
}
