#include<stdio.h>
int main(){

int arr[5];
   int value ;
int i =0 ;
printf("Enter your value ");
while(i<5){
    scanf("%d",&value);
    if(value==0||value==1||value==2){
        arr[i]=value ;
        i++ ;
    }
    else{printf("invalid input ");}
}
for(int i = 0 ; i<5 ; i++){
   for (int j =i+1 ; j<5 ;j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp ;
        }
   }
}
for (int i =0 ;i<5 ; i++){
    printf("%d  ",arr[i]);
}


    return 0 ;
}