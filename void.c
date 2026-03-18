#include<stdio.h>
// void namaste();
// void bonjour();

// int main() {
//     printf("enter f for french & i for indian :");
//     return 0;
// scanf("%c",&ch);
// if( ch == 'i')
// namaste(); {
//     else {
//         bonjour();
//     }

// }
// void namaste() {
//     printf("namaste\n");
// }
// void bonjour() {
//     printf("bonjour\n");
// }
/*function : does some work
function without parameters and without return type
function with parameter and without return type
function without parameter and with return type
function with parameter and with return type */
//  void greet () {
//     printf("welcome to tops\n");
//  }
//  void sum(int a,int b ) {
// printf("sum is %d\n",a+b);
// }
//  int  mul(int a, int b) {
//      // function without parameter and with return type
//      return a*b;  }
//  float div(int a,int b) {
//     return (float)a/b;
//  }
//   int main() {
//      greet();
//     sum(12,12);
//     printf("mul is %d",mul(34,56));
//      printf("\ndiv is %f",div(10,3));
int calculate_total(int m1,int m2,int m3,int m4) {
     return m1 + m2 + m3 + m4;
     float average(int total) {
        return total/4;

     }
     int main () {
        int m1=78,m2=89,m3=90,m4=67;
        int total = calculate_total(m1,m2,m3,m4);
        printf("total is %d",total);
        float avg = average(total);
        printf("\naverage is %f",avg);
        
    } return 0;
}
