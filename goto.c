#include<stdio.h>
int main(){
//     printf("\nstart\n");
//     goto end;
//     printf("this line will not print");
//     end:
//     printf("\nend\n");
//     return 0;
// }
int i=1;
start:
if(i<=5){
    printf("\n%d\n",i);
    i++;
 goto start;
}
}