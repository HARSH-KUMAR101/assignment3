#include<stdio.h>
#include<conio.h>
int main()
{
   int x,y,z;
     printf("enter three num");
     scanf("%d %d %d",&x,&y,&z);
        if(x>y && x>z)
            printf("%d is greatest",x);
         else if(y>x && y>z)
            printf("%d is greatest",y);
         else if(x==y || y==z || z==x)
            printf("given same num can't find greatest");
         else
            printf("%d is greatest",z);

return 0;
}
