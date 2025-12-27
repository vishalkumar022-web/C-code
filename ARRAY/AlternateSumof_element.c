#include<stdio.h>
int main(){

int arr[5]={1,2,3,4,5};
int sum = 0 ;

for (int i= 0 ; i<5 ;i++){
    if (i%2==0){
        sum = sum + arr[i];
    }
}
printf("Sum of alternate element of a given array = %d",sum);
    return 0 ;
}