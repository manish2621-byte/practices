#include<stdio.h>
int main() {
    //an array is a collection of elements of the same data type stored in contiguous memory location.
 
// for(i=0;i<5;i++)
//     printf("\n%d",a[i]);
// return 0;
// int a[10],i,sum = 0;

// for (i=0;i<10;i++)
// sum+=a[i];
// printf("\nsum=%d",sum);

// return 0;
//average array
// int a[5],i,sum=0;
// float avg;
// for(i=0;i<5;i++){
// scanf("%d",&a[i]);
// sum+=a[i];
// }
// avg=sum/5.0;
// printf("\naverage=%f",avg);

// return 0;
// even odd array

// int a[10],i,even =0,odd=0;
// for(i=0;i<10;i++){
//     scanf("%d",&a[i]);
//     if(a[i]%2==0)
//    printf("\neven=%d",a[i]);
//    else
//    printf("\nodd=%d",a[i]);
  
// }return 0;
// positive negative array
// int a[10],i,positive=0,negative=0;
// for(i=0;i<10;i++){
//     scanf("%d",&a[i]);
//     if(a[i]>0)
//         positive++;
//     else
//         negative++;
// }printf("\npositive=%d negative=%d",positive,negative);
// return 0;}
// copy array 
// int a[10],i,copy[10];
// for(i=0;i<10;i++){
//     scanf("%d",&a[i] );
//     copy[i]=a[i];
// if(a[i]==copy[i]){
//     printf("\nelement is found=%d",copy[i]);
// }
//     else

//     printf("\nelement is not found=%d",copy[i]);
// }return 0;}
// int a[5]={1,2,3,4,5},b[5];
// for(int i=0;i<5;i++)
//     b[i]=a[i];
//     for(int i=0;i<5;i++)
//         printf("\n%d",b[i]);
//     return 0 ;}
// add array number
// int a[5]={1,2,3,4,5}, i ,sum=0;

// for(int i=0;i<5; i++)
// sum +=a[i];
// printf("sum is :%d", sum);

//largest & smallest
int arr[5], i ,max ,min;
for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    max=min=arr[0];
    for (i=1;i<5;i++){
        if(arr[i]>max) max =arr[i];
        if(arr[i]<min) min =arr[i];

    }
printf("max=%d min=%d", max,min);

 
return 0;

}




    
 