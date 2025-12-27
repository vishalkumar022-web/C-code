// Arrange in wave form :--->  

#include<stdio.h>
int main(){

int arr[8]={ 10, 5, 6, 3, 2, 20, 100, 80 };

for (int i =0 ;i<8 ;i++){
    if(i%2==0&&arr[i]<arr[i+1]){
        int temp = arr[i];         
        arr[i] = arr[i+1];
        arr[i+1] = temp ;
    }
     else if(i%2==1&&arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp ;
    }
}

for (int i = 0 ;i<8 ;i++){
    printf("%d  ",arr[i]);
}
  return 0 ;
}