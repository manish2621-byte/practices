/*recursion is function calling function
1
2
3
4
5


*/
#include<stdio.h>
void print(int n) {
    if (n>5){
        return;
    }
    printf("\n%d\n",n);
    print(n+1);
}
#include <stdio.h>
int main() {
    print(1);
    return 0;
}
#include<stdio.h>
int fact(int n){
    if (n==1){
        return 1;   
    } 
    return(n*fact(n-1));
}
int main() {
    printf("%d",fact(5));
    return 0;
}
