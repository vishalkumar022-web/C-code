#include<stdio.h>
int main(){

int arr[6]={6,8,4,-5,7,9};
int flag = 0 ;
int k ;
printf("Enter the value of k :-- ");
scanf("%d",&k);

for (int i =0 ;i<6 ; i++){
    for (int j =i+1 ; j<6 ;j++){
        if(arr[i]+arr[j]==k){
            printf("\n%d , %d pair whoose sum is equal to %d ",i,j,k);
            flag = 1 ;
        }
    }
}

if (flag==0){
    printf("No any indices present whoose sum is equal to %d",k);
}

    return 0 ;
} 