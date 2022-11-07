#include<stdio.h>
#include<conio.h>
int main()
{
 int eng,hindi,math,science,comp;
   printf("enter marks of five subjects out of 100\n");
   printf("enter marks in eng:");
   scanf("%d",&eng);
   printf("enter marks in hindi:");
   scanf("%d",&hindi);
   printf("enter marks in math:");
   scanf("%d",&math);
   printf("enter marks in science:");
   scanf("%d",&science);
   printf("enter marks in comp:");
   scanf("%d",&comp);
     if(eng<33)
        printf("you failed in english");
         if(hindi<33)
          printf("\nyou failed in hindi");
         if(math<33)
          printf("\nyou failed in math");
         if(science<33)
          printf("\nyou failed in science");
         if(comp<33)
          printf("\nyou failed in comp");
     else
        printf("you passed all the subjects");

return 0;

}
