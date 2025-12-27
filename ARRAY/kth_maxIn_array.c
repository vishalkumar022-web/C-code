#include<stdio.h>
int main(){
int temp = 0 ;    int max = 0 ;    int k ;
printf("Enter your kth max number ");
scanf("%d",&k);
int arr[5]={1,44,55,34,2};
for(int i =0 ;i<5 ;i++){
    for (int j = i+1 ;j<5 ;j++){
        if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp ;                                                                    
        }
    }
}
int flag = -1 ;
for (int i= 0 ; i<5 ; i++){
    max = arr[5-k];
    arr[i]= max ;
        flag = i ;
}
printf("%d is max at %d index ",max,flag);
    return 0 ;
}


