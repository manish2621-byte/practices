#include<stdio.h>
#include<string.h>
int main() {
    // char name[]="tops";
    // printf("\n%s",name);
    // char str[4]={ 'h','e','l','\0'};
    // printf("\n%s",str);
    // return 0;
   
// char username[20],password[4];
//     char username = admin, password = 1234;
// printf("\nenter username:");
// scanf("%s",username);
// printf("\nenter password:");
// scanf("%s",password);
// if(strcmp(username,"admin")==0 && strcmp(password,"1234")==0)
//     printf("\nwelcome to tops");
// else
//     printf("\ninvalid username and password");
char str1[]="hello",str2[20];
// strcpy(str2,str1);
// printf("\nstr1=%s str2=%s",str1,str2);
strrev(str1);
printf("\n%s",str1);
return 0;
}