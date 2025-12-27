// #include<stdio.h>
// int main(){

// int arr[8]={1,2,3,4,5,6,7,8};

// int k1 ;  int k2 ;
// printf("Enter the value of k1 and k2 ");
// scanf("%d%d",&k1,&k2);

// for (int i =k1 ; i<=7 ;i++){
//     arr[i]=arr[i+1];
// }
// k2-- ;
// for (int i = k2 ;i<=6 ; i++){
//     arr[i]=arr[i+1];
// }
// for (int i = 0;i<=5;i++){
//     printf("%d  ",arr[i]);
// }
//     return 0 ;
// }


#include<stdio.h>
int main(){

int arr[8]={1,2,3,4,5,6,7,8};

int k1 ;  int k2 ;  int brr[8];   int x = 0 ;
printf("Enter the value of k1 and k2 ");
scanf("%d%d",&k1,&k2);

for (int i =0 ; i<=7 ;i++){
    if (i==k1||i==k2){
        continue;
    }
    brr[x]=arr[i];
    x++ ;
}

for (int i = 0;i<x;i++){
    printf("%d  ",brr[i]);
}
    return 0 ;
}