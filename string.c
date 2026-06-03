 #include<stdio.h>
 #include<string.h>
// int countlength(char arr[]);

// int main(){
//   char str[50]="manish";
//   char str1[]="sharma";
//   strcat(str,str1);
//   puts(str);
//     return 0;
// }
// int countlength(char arr[]){
//     int count=0;
//     for(int i=0; arr[i]!='\0';i++){
//     count++;}return count;
   
// }     


// int main() {
//     char str[]="manish";
//     int length =strlen(str);
//     while(length>=0){
//       printf("%c",str[length]);
//       length--;
//     }
//     return 0;
// int main(){
//   char str1[200];
//   char str2[200];
//   printf("enter your  string1 :");
//   fgets(str1,200,stdin);
//   printf(" your string_1 is : %s",str1);
//    printf("enter your  string2 :");
//   fgets(str2,200,stdin);
//   printf(" your string_2 is : %s",str2);
//   int i=0;
//   while(str1[i]!='\0'){
//     str2[i]=str1[i];
//     i++;}
//     str2[i]='\0';
//     printf("lenght = %d",i);
//   printf("\nafter copying\n");
//   printf("first string = %s\n",str1);
//   printf("second string = %s\n",str2);

  
   

//   return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "1234";

//     int i = 0;
//     int j = strlen(str) - 1;

//     while (i < j) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;

//         i++;
//         j--;
//     }

//     printf("Reversed string: %s\n", str);

//     return 0;
// }
#include <stdio.h>

// void removeSpaces(char *str) {
//     int i = 0, j = 0;

//     while (str[i] != '\0') {
//         if (str[i] != ' ') {
//             str[j++] = str[i];
//         }
//         i++;
//     }
//     str[j] = '\0';
// }

// int main() {
//     char str1[100] = "111 11 111 1111";
//     char str2[] = "22 222 222 2222";

//     removeSpaces(str1);
//     removeSpaces(str2);

//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);

//     return 0;
// }
int main(){
    char str1[100],str2[100];
    int i=0, j=0;
    printf("enter your string_1: ");
    fgets(str1,100,stdin);
    printf("enter your string_2: ");
    fgets(str2,100,stdin);
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
    
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("output : %s",str1);
    return 0;
}