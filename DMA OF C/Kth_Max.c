#include<stdio.h>
#include<stdlib.h>

int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);
int *arr = (int *)calloc(n,sizeof(int));

for (int i = 0 ; i<n ; i++){
    scanf("%d",&arr[i]);
}
for (int i = 0 ;i<n ;i++){
    for (int j = i+1 ; j<n; j++ ){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j] ;
            arr[j] = temp ;
        }
    }
}
int max = 0 ;  int k ;  int flag = -1 ;
printf("Enter your kth element");
scanf("%d",&k);
for (int i = 0 ;i<n; i++ ){
    max = arr[n-k];
    arr[i] = max ;
    flag = i ;
}
printf("kth max is = %d with index number %d ",max,flag);

    return 0 ;
}