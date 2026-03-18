#include <stdio.h>
int main() {
  // int a= 12, b = 54 , modulo;
  // modulo = a % b;
  // printf("modulo of a & b is : %d",modulo);
  // return 0; }
  // int a,b ;
  // printf("enter two number:");
  // scanf("%d %d",&a,&b);
  // printf("\nsum a and b is : %d",a+b);
  // return 0;
//   float a,b,c;
//   printf("enter three number:");
//   scanf("%f %f %f",&a,&b,&c);
//   printf("average of a,b and c is : %f",(a+b+c)/3);
// return 0;
// 
// int a = 5 , b =10;
// a = a+b;//5+10=15
// b = a-b;//15-10=5
// a = a-b;//15-5=10
// printf("a =%d b=%d",a,b);
// return 0;
// }
// 
// int f , c,temp;

// printf("enter temp :");
// scanf("%d",&temp);
// f= (c * 9/5) + 32;
// printf("temp in fahrenheit is : %d",f);
// return 0;
// int a,b;
// printf("enter two number:");
// scanf("%d %d",&a,&b);
// if(a>b){
//   printf("largest = %d",a);
//   printf("\nlargest =%d",b);
// }return 0;
// int math,science,english,ss;
// int hindi;
// printf("enter marks of math,science,english,s.s,  hindi:");
// scanf("%d %d %d %d %d",&math,&science,& hindi,&english,&ss);
//  int total = math + science + english + ss + hindi;
//  float per = total/5.0;
// printf("total marks is : %d",total);
// printf("\npercentage is : %f",per);
// return 0;
// int sec ,h,m,s;
// printf("enter seconds:");
// scanf("%d",&sec);
// h=sec/3600;
// m=(sec%3600)/60;
// s=sec%60;
// printf("%d seconds is : %d hour %d minute %d second",h,m,s);
// return 0;
int num,r1,r2,r3,rev;
printf("enter 3 digit number:");
scanf("%d",&num);
r1=num%10;
r2=(num/10)%10;
r3=num/100;
rev = r1*100 + r2*10 + r3;
printf("reversed number =%d",rev);
return 0;

}


