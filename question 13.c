#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
   printf("enter a num:");
   scanf("%d",&num);
    if(num%3==0 && num%2==0)
        printf("%d is divisible by 3 and 2");
    else
        printf("%d is not divisible by 3 and 2");
return 0;
}

