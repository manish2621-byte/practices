#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("enter the number = ");
    scanf("\n %d %d %d",&a , &b ,&c);
if(a>b && b>c){//14>55>18
    printf("the number is largest %d = ",a,b,c);
}else if(b<a && a<c){//
    printf("the number is smallest%d = ",a,b,c);
}else{printf("both number are equal");}
return 0;

}