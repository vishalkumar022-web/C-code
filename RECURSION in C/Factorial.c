#include<stdio.h>
int factorial(int a, int c ){
   
    if(a==1){
        return c ;
    }
    c = c * a ;
    a-- ; 
    factorial(a,c);
}
int main(){

    int a ;
    printf("Enter your number ");
    scanf("%d",&a);

  int m = factorial(a,1);  

printf("Factorial  of a given number is  = %d",m);


    return 0 ;
}