#include<stdio.h>
#include<conio.h>
int main()
{
  int month;
     printf("enter month number:");
     scanf("%d",&month);
       if(month==4 || month==6 || month==9 || month==11)
         printf("this month have 30 days");
        else if(month==2)
         printf("this month have 28/29 days");
        else
         printf("this month have 31 days");
return 0;
}
