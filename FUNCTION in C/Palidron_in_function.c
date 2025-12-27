#include<stdio.h>
int Palidron(int n){
    int a = n ;  int rem = 0 ;  int reverse = 0 ; 
    for (;a>0;a=a/10){
         rem = a%10 ; 
         reverse = reverse*10 + rem ;
    }
    if (reverse==n){
        return 1 ;
    }
    else {
        return 0 ;
    }
}
int main(){


int n ;
printf("Enter your number ");
scanf("%d",&n);

int m = Palidron(n);

if(m==1){
    printf("%d is palidron number ",n);}
    else{
        printf("%d is not a palidron number ",n);
    }
    return 0 ;
} 