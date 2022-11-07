#include<stdio.h>
#include<conio.h>
int main(){
   int x,y;
      printf("enter first num:");
      scanf("%d",&x);
      printf("enter second num:");
      scanf("%d",&y);
        if(x>y)
            printf("%d is greater than %d",x,y);
         else if(x==y)
            printf("both are same num");
         else
            printf("%d is greater than %d",y,x);
return 0;
}


