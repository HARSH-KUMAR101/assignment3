#include<stdio.h>
#include<conio.h>
int main(){
  int num;
    printf("enter a num:");
    scanf("%d",&num);
        if(num>99 && num<1000)
            printf("%d is a three digit num",num);
        else
            printf("%d is not a three digit num",num);
return 0;
}
