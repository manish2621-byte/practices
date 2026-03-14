#include<stdio.h>
int main() {
   // BMI CALULATOR;
   int w;
   printf("\nenter your age:");
   scanf("%d",&w);
   int h;
   printf("\nenter your height");
   scanf("%d",&h);
   if (h<=156)//156 cm 
   {printf("\nnormal");}
   else{printf("\nyour height is heigher then compare your weight pls increase your weight");}
   
int choice;
printf("\nenter your height:");
scanf("%d",choice);
printf("\nenter your weight:");
scanf("%d",choice);
switch(choice){
    case 1:
    printf("\nnormal:%d",choice==176);//176cm
    printf("\nyour are in underweight:%d",choice<=80);
    break;
}

    return 0;
}