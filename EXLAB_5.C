#include<stdio.h>
int isprime(int number){
    if(number <=1){
        return 0;
    }
    for(int i=2;i<number;i++){
        if(number % i==0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
    if(isprime(number)){
        printf("\n%d is  a prime number ",number);

    }else{
         printf("\n%d `      ' is not  a prime number ",number);
    }
return 0;
}
