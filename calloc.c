#include<stdio.h>
#include<stdlib.h>
/*malloc : dynamic memory allocation
data structure
array
int a [100]
20
default value
*/
int main() {
    int *arr;
    int n;
    printf("\nenter the size :")
    scanf("%d",&n);
    arr=(int*)calloc(n, sizeof(int))
    printf("enter the value : ");
    for (int i=0;i<n;i++){
         scanf("%d",&arr[i]);
printf("%d",arr[i]);
    }
    free(arr);
}