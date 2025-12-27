#include<stdio.h>
int main(){
int i ;  int flag = 0 ;
int arr[5]= {1,2,3,2,1};
int brr[5]; 
for ( i = 0 ; i<5 ; i++){
     brr[i]=arr[4-i];      
    }
    for (int i = 0 ;i<5; i++){
        printf("%d",brr[i]);
    
    }
    for (int i = 0 ; i<5; i++){
        if(arr[i]==brr[i]){
             flag = 1 ;
        }
    }
if (flag==0){
    printf("not palidron ");
}
else{
    printf("Palidron number ");
}
    return 0 ;
}