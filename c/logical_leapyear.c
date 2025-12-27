#include<stdio.h>
int main(){


int n ;
printf("enter your year ");
scanf("%d",&n);

if(n%4==0 && n%100!=0 ||(n%400==0)){
    printf("a given year is leap ");
}
else {
    printf("a given year is not a leap year");
}



    return 0;
}