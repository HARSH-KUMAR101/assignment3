#include<stdio.h>
#include<conio.h>
int main()
{
  float cp,sp,profit,loss;
    printf("enter cost price of the product:");
    scanf("%f",&cp);
    printf("enter sell price of the product:");
    scanf("%f",&sp);
      if(sp>cp){
        profit=sp-cp;
        profit=(profit/cp)*100;
        printf("you got %.2f%% profit",profit);
      }
      else{
        loss=(sp-cp);
        loss=(loss/cp)*100;
        printf("you got %.2f%% loss",loss);
      }
return 0;
}

