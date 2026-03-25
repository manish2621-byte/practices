#include<stdio.h>
#include<string.h>
/*
function : does some work
function without parameter and without return type
*/
// void greet(){
//     printf("\nhello function");
// }
// int main(){
// greet();
// return 0;}
//function with parameter and without return type
// void sum( int a , int b){
//     printf("sum is :%d",a+b);
// }
// int main(){
// sum(12,78);
// return 0;
// }
//function without parameter and with return type
// int mul(){
//     int a=3;
//     int b=5;
// return a*b;}

// int main(){
//     printf("mul is %d",mul());
//     return 0;
// }
//function with parameter and with return type
// float div(int a,int b){
//     return (float)a/b;
// }
// int main(){
//     printf("\ndiv value is%d",(div(30,10)));
//     return 0;
// }

// 
// void table(){
//     for(int i=1;i<=10;i++){
//         printf("\n22 x %d =%d",i,22*i);
//     }

// }
// int main() 
// { table();
//     return 0;

// }
// void sum() {
//      int s=0;
    

//     for(int i=1;i<=10;i++)
//     printf("\ns = %d",s+=i );
//     //s+=i;
//         printf("\nsum : %d", s);      
//     }
//     int main () {
//         sum();
//         return 0;
//     }
// void factorial() {
//      int n=1;
//     for (int i=1;i<=10;i++)
//     printf("\nf = %d",n*=i);
    
//     printf("\nfactorial of n :%d",n);

// }

// int main() {
//     factorial();
//     return 0;

// }
// void fibonacci() {
//     int a = 0, b = 1, temp;
//     printf("\nFibonacci series up to 10 terms:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", a );
//          temp = a + b;//temp =1 +1
//          a = b;//1 = 1
//          b = temp;//1= 2
//     }
// }

// int main() {
//     fibonacci();
//     return 0;

/*fibonacci series : 1 1 2 3 5 8 13
sum of last 2 nos
replace ist varrible with 2nd
replace 2nd variable with ans
display value
a=1
b=1
c=a+b
a=b//1
b=c//2*/
int main() {
    int a=1,b=1,c;
    printf("%d %d ",a,b);
    int i=1;
    while(i<=5){
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
        i++;

    }return 0;
}
