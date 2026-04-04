#include<stdio.h>
int main(){
    //make calculator as according to question,take input from client;
    char op;
    float num1,num2,result;

    printf("enter your   number = :");
        scanf("%f",&num1);

    printf("enter operator(+,-,*,/) : ");
        scanf(" %c",&op);
        

printf("enter your   number = :");
        scanf("%f",&num2);
       
            switch(op) {
                case '+':
                result = num1+num2;
                    printf("result: %.2f\n", result);
                    break;
                case '-':
                result = num1-num2;
                    printf("result: %.2f\n", result);
                    break;
                case '*':
                result = num1*num2;
                    printf("result: %.2f\n",result);
                    break;
                case '/':
                if(num2 != 0)
                result =num1 / num2;
                else{
                    printf("error divisonby zero is not allowed.");
                return 0;
            }
                printf("result=%.2f",result);
                break;
                default:
                printf("invalid operator!");
                
               }   return 0; }