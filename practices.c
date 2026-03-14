#include<stdio.h>
int main() {int n;
    do{ 
        printf("enter number:");
        scanf("%d\n",n);
        printf("%d\n",n);
        if(n % 2 != 0){
            break;
        }
       }while(1);
       printf("thank you\n");
}
