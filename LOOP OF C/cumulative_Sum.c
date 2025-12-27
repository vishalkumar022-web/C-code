#include<stdio.h>
int main(){

int i  ;     int n ; int sum = 0 ;
printf("Enter the value of i ");
scanf("%d",&i);
printf("Enter the value of n ");
scanf("%d",&n);
while(i<=n){
    sum = 0 ;
    for (int a = 1 ; a<=i ; a++){
             sum = sum + a ;
    }
     printf("sum of %d =  %d \n", i , sum );
    i++ ;
}



    return 0 ; 
}