#include<stdio.h>
#include<stdlib.h>

int main(){

    int* arr = (int*)calloc(5,sizeof(int));

    for(int i = 0 ; i<5 ;i++){
        scanf("%d",&arr[i]);
    }
int count = 1 ;
    int flag = -1 ;
    for (int i = 0 ;i<5 ; i++){
        for(int j = i+1; j<5;j++){
            if(arr[i]==arr[j]){
                count++ ;
                flag = arr[i] ;
                    break;
            }
        }
        if(flag==arr[i]){
            break;
        }                                                                                
    }                                                           
printf("%d is a first repeating element repeated %d times ",flag,count);
    return 0 ;              
}