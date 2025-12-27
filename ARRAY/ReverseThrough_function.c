#include<stdio.h>
void reverse(int arr[]){
    int temp = 0 ;

for (int i=0,j=4 ;i<=j ; i++,j--){
    
    temp= arr[i];
    arr[i]=arr[j] ; 
     arr[j]= temp ;
   
}
}
int main(){
    

int arr[5]= {1,2,3,4,5};
  reverse(arr);


for(int i =0 ; i<5 ;i++){
    printf("%d  ",arr[i]);
}
    return 0 ;
}