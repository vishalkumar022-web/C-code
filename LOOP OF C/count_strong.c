//Write a program to take two number from user and print Strong numbers between the 
  // given range
 //Ex:   input :num1=1 , num2=200.               output : Strong numbers = 1 , 2 , 145.
#include<stdio.h>
int main(){

int i  ;  int n  ;  int sum = 0 ; int c = 1 ;
printf("enter the value of i ");
scanf("%d",&i);
printf("enter your value of n ");
scanf("%d",&n);

for (;i<=n;i++){
    int d = i ;
    sum = 0 ;
    while(d>0){
        int rem = d%10 ;
        c = 1 ;
        for (int i = 1 ; i<=rem ; i++){
            c = c*i ;
        }
        d = d/10 ;
        sum = sum + c;
    }
    if(sum==i){
        printf("%d is a strong number\n ",i);
    }
}

    return 0 ;
}
