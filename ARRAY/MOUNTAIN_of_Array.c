#include<stdio.h>
int main(){

int arr[6]={16,17,11,3,5,2};

for (int i = 1 ; i<6 ; i++){
    if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
        printf("%d  ",arr[i]);
    }
}

    return 0 ;
}