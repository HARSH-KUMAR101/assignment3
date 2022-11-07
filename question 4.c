#include<stdio.h>
#include<conio.h>
int main(){
  int num;
   printf("enter a num");
   scanf("%d",&num);
     if(num&1==1)
         printf("%d is an odd num",num);
     else
         printf("%d is an even num",num);
 return 0;
}
