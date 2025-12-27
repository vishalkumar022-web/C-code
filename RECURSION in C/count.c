#include<stdio.h>
int count(int n , int c ){
   
    if(n==0){
        return c ;
    }
    n = n / 10 ;
    c++ ;
    count(n,c);
    
}                                                                                                       
int main(){ 
    int n ;
    printf("Enter your number ");
    scanf("%d",&n);

    int m = count(n,0);

    printf("Count of given digit of a number = %d ",m);

    return 0 ;
}