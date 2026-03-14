//VARIBALES DATA TYPE + INPUT
#include<stdio.h>
 int main() {
//     printf("hello manish");
//     int age = 23;
//     float pi = 3.14;
//     char percentage = '%';
//      printf("\n %d",age);
//   printf("\n %f",pi);
//    printf("\n %c",percentage);
    
//     int a , b;
//     printf("enter a\n");
//     scanf("%d",&a);
//     printf("enter b\n");
//     scanf("%d",&b);
//     printf("sum of a & b is : %d\n", a+b);
//instructions  &  operators
// int age =22;
// int oldAge = age;
// int newAge = oldAge + 2;
// printf("new age is : %d", newAge);
// int rupee = 1 ;
//  int dollar = 90;
// printf(" what was the rate of dollar:%d", 2  * dollar);
//  int a = 1, b = 2 , c = 3;
//  a = b + c;
// printf("\n%d",a);
// printf("\nsum of 2 & 3: %d", 2 + 3);
// printf("\nsum of 2.0 & 3: %f", 2.0 + 3);
// printf("\nsum of 2.0 & 3.0: %f", 2.0 + 3.0);
// printf("\n output:%d", 5+1/2*3);
// int a = 10;
// a += 10;
// printf("a+10= %d\n",a);
// a -= 10;
// printf("a-10= %d\n",a);
// a *= 10;
// printf("a*10= %d\n",a);
// a /= 10;
// printf("a/10= %d\n",a);
// a %= 10;
// printf("a%c10= %d\n",a);
// if-else condition....
// int age;
// printf("enter the age:");
// scanf("%d",&age);
// if(age<=23){
//     printf("you are a right");
// }
// else{printf("you are a not right");}
// int number;
// scanf("%d",&number);
// if(number % 2 == 0){
//     printf("even");

// }else {
//     printf("odd");
// }
// int number =7;
// int luckynumber = 8;
//   number == luckynumber ? printf("you are lucky\n"): printf("you are not lucky\n");
// return 0;

//     int day = 10;
//     switch(day) {
//         case 1 : printf("monday\n");
//         break;
//         case 2 : printf("tuesday\n");
//         break;
//         case 3 : printf("wednesday\n");
//         break;
//         case 4 : printf("thursday\n");
//         break;
//         case 5 : printf("friday\n");
//         break;
//         case 6 : printf("saturday\n");
//         break;
//         case 7: printf("sunday\n");
//         break;
// default : printf("wrond day");
//     }

//for loop
// f
//nestedloop
// for(int i = 1;i<=3;i++){
//     for(int j=1;j<=4;j++){
//         printf("%d",j);

//     }printf("\n");
// }
for(int i = 1;i<=4;i++){
    for(int j=1;j<=3;j++){
        printf(" * ");

    }printf("\n");}

//breakandcontinue
// for( int i=1;i<=10;i++){
//     if(i==5){
//         break;
//     }
//     printf("\n%d\n",i);
// } int j=0;
// while(j<=5){//3<=5}
//  j++;
//  if(j==3)
//  continue;
//  printf("%d",j);
for(int i=1;i<=10;i++){
    if (i%2!=0)
    continue;
    printf("%d",i);
}
  return 0;}
