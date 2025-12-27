#include<stdio.h>
int main(){

int i  ;     int n ; int c = 1 ;
printf("Enter the value of i ");
scanf("%d",&i);
printf("Enter the value of n ");
scanf("%d",&n);
while(i<=n){
    c = 1 ;
    for (int a = 1  ; a<=i ; a++){
            c  = c  * a ;
             
     }
    printf("factorial of %d  = %d \n",i , c  );
    i++ ;
}

    return 0 ; 
}