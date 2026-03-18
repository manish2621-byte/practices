/* pointer is a variable that stores the address of some other variable*/
#include<stdio.h>
// int main() {
//     int a=10;
//     int *p=&a;
//     printf("\n a is %d",a);
//     printf("\naddress of a is %p\n",&a);
//     printf("\npointer p is %d",p);
//     printf("\n value stored in address of pointer : %d",*p);
//     return 0 ;
// int swap( int a=10, int b=5){
//     return a = a+b;
//     b= a-b;
//     a= a-b;
// }
// int main(){
//     int a =10, b=5;
   
//     printf("a=%d b=%d", a,b);
// }
void swap(int *a, int *b, ){

    int temp =*a; 
    *a=*b;
    *b=temp;

}
int main() {
int a=10 ,b=20 ;
printf("\nbefore swap a = %d and b = %d",a,b);
swap(&a,&b);
printf("after swap a = %d and b = %d\n",a,b);
return 0;
}

