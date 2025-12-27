#include<stdio.h>
int main(){

int arr[7]= {55,63,85,30,65,25,20};

for(int i =0 ; i<7;i++){
    for (int j =i+1 ; j<7; j++){
        if(arr[i]>arr[j]){

             int  temp = arr[i];
             arr[i] = arr[j];
             arr[j]= temp ;
                            
        }
    }
    
}
for(int i = 0 ; i<7 ;i++){
    printf("%d  ",arr[i]);
}

    return 0 ;
}