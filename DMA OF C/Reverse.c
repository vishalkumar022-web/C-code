// #include<stdio.h>
// #include<stdlib.h>

// int main(){
// int n = 5 ;
// int *arr = (int *)malloc(n*sizeof(int));

// for(int i = 0 ;i<n ; i++){
//     scanf("%d",&arr[i]);
// }


// for (int i= 0,j= n-1;i<=j;i++,j--){
//     int temp = arr[i];
//     arr[i] = arr[j] ;
//     arr[j] = temp ;
// }
// for (int i = 0 ;i<n ;i++){
//     printf("%d  ",arr[i]);
// }

//     return 0 ;
// }


//PALIDRON :--->

#include<stdio.h>
#include<stdlib.h>

int main(){
int n = 3 ;
int *arr = (int *)malloc(n*sizeof(int));

for(int i = 0 ;i<n ; i++){
    scanf("%d",&arr[i]);
}
int brr[n];  int c = 0 ;

for (int i=n-1;i>=0;i--){
    brr[c] = arr[i];
        c++ ;
}
int flag = 0 ;
for (int i = 0 ;i<n ;i++){
   if(arr[i]!=brr[i]){
    flag = 1 ;
   }
}
if(flag==1){
    printf(" not palidron ");
}
else{
    printf(" palidron ");
}
    return 0 ;
}
