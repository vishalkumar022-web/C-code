#include<stdio.h>
void rotate(int arr[],int a , int b ){

    int i = a ;    int j = b ;
    while(i<=j){                // OR ham yaha for loop ka bhi use kar sakte hai 
        int temp = arr[i];     // like for(int i =a , j=b ; i<=j ;i++,j--){                                                             //}
         arr[i]=arr[j];
         arr[j]=temp ;          //                              }
            i++ ;    j-- ;
        }
}
int main(){

int arr[5];
printf("Enter your inputs :--> ");
for(int i =0 ;i<5 ; i++){
scanf("%d",&arr[i]);
}

int k ;
printf("Enter your value of k:-> ");
scanf("%d",&k);


k =k%5 ;
rotate(arr,0,4);
rotate(arr,0,k-1);
rotate(arr,k,4);

for (int i =0 ; i<5 ; i++){
    printf("%d  ",arr[i]);
}

    return 0 ;
}