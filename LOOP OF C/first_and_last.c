#include<stdio.h>
int main(){

int n ; int last_digit , first_digit ; 
printf("enter your number ");
scanf("%d",&n);

last_digit= n%10 ;
printf("last digit of a number is %d\n", last_digit);
while(n>=10){
    first_digit= n/10 ;
    n=n/10 ;
}
printf("first digit of a number is %d\n", first_digit);

    return 0 ;
}