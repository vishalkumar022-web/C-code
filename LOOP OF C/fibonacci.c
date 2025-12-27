#include<stdio.h>
int main(){

int n ;
printf("enter the value of n ");
scanf("%d",&n);    
int a = 0 ;
int b = 1 ; 
int sum = 0 ;

for (int i=1; i<=n ;i++){
   sum = a+b ;
    a = b;
    b = sum ;
    printf("%d    ",a);
}
    return 0 ;
}