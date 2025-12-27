#include<stdio.h>
int main(){

int size ;
printf("Enter your size");
scanf("%d",&size);

int arr[size];
int sum = 0 ;

for(int i = 0 ; i<size ; i++){
printf("Enter your %d number ",i+1);
scanf("%d",&arr[i]);
sum = sum + arr[i];

}

printf("sum = %d",sum );
  

// similarly for product where c = 1 kar denge instead of sum = 0 ;





    return 0 ;
}