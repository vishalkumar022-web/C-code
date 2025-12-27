#include<stdio.h>
int main(){

int arr[5]={1,2,3,3,2};
int count = 1 ; int a = 0 ;
for(int i =0 ; i<5;i++){ 
         a = 0 ;
    for(int k = 0 ; k<i; k++){
        if (arr[i]==arr[k]){
            a=1 ;
            break;
        }
    }
    if (a==1){
        continue;
    }
     
     count =1 ;
    for (int j = i+1 ; j<5 ;j++){
        if (arr[i]==arr[j]){
            count++ ;
}

        }
        printf("%d is repeated %d times \n",arr[i],count);
    }

    return 0 ;
}