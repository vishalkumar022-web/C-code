#include<stdio.h>
int main(){

int arr[5]={1,2,3,5,7};
int count = 0 ;  int c = 0 ;

for(int i = 0 ; i<5 ;i++){
    count =0 ;
    for (int j = 1;j<=arr[i];j++){
        if (arr[i]%j==0){
            count++ ;
        }
    }
    if (count==2){
        c++ ;
        
    }
    
}
printf("total number of prime in a given times = %d ",c );


    return 0 ;
}