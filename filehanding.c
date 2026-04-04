#include<stdio.h>
#include<string.h>
int main() {
    FILE *fptr;
    fptr = fopen("student.text","w");
    char name[100];
    int age;
    int marks;
    printf("enter name :");
    scanf("%s",name);
    printf("enter age :");
    scanf("%d",&age);
    printf("enter marks :");
    scanf("%d",&marks);
    fprintf(fptr,"student name :%s\n",name);
     fprintf(fptr,"student age :%d\n",age);
      fprintf(fptr,"student marks :%d\n",marks);

    fclose(fptr);
    
    return 0;
}
