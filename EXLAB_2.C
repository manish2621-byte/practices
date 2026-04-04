#include<stdio.h>
int main(){
    int a;
    //int b;
    printf("enter your number: ");
    scanf("%d",&a);
    //printf("enter your number: ");
  //  scanf("%d",&b);
    if(a%2==0){
        printf(" \nthis is a even number: ");
        printf("\nthis is a whole number: ");

    }else{printf("\nthis is a odd number : ");
        if(a>0){
            printf("\nthis a positive number :");
        }
        else if (a<0)
        {
            printf("\nthis a negative number");
        }
        
        else
        {
            printf("\nthis is a whole  number");
        }
        
        }
        if(a%3==0 && a%5==0){
            printf("\nthe number is a multiple of both 3 and 5\n");

        }else{ printf("\nis not  multiple by 3 and 5");}
        
        

    return 0;
}