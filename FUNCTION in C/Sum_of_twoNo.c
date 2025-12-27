#include<stdio.h>
int sum(int a , int b){
    int c = a+b ;
    return c ;
}                                  //  Same as agar hamko - , * ,/ ya % kuch bhi karne ke liye same code hoga ..
int main(){

    int a , b ;
    printf("Enter your numbers ");
    scanf("%d%d",&a,&b);

    int m = sum(a,b);
    printf("sum = %d",m);

    return 0 ;
}