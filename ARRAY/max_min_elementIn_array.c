#include<stdio.h>
int main(){

int arr[3]= {1,9,10};
int min = arr[0];  int max = arr[0];
for(int i = 1 ; i<3 ; i++){
    if (min>arr[i]){
        min = arr[i];
    }
    else if (max<arr[i]){
        max=arr[i];}
    }
   
    
printf("Min element in a array is %d\n",min);
   printf("Max element in a array is %d\n",max);

    return 0 ;
}
