#include<stdio.h>
int main(){

int n;

printf("Enter the value of n:- ");
scanf("%d",&n);

// if(((n>2000)&&(n%4==0)&&(n%100!=0))|| (n%400==0)){
// printf("A given year is grater than 2000 and a leap year ");}

// else if(((n<2000)&&(n%4==0)&&(n%100!=0))|| (n%400==0))
// printf("A given year is not grater than 2000 but a leap year ");

// else if(((n>2000)&&(n%4!=0)&&(n%100!=0))|| (n%400==0))
// printf("A given year is grater than 2000 but not a leap year ");

// else if(((n<2000)&&(n%4!=0)&&(n%100!=0))|| (n%400==0))
// printf("A given year is not grater than 2000 and not a leap year ");

if (n>2000){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                printf("A given year is grater than 2000 and a leap year");
            }else{printf("A given year is grater than 2000 and not a leap year");}
        }else{
            printf("A given year is grater than 2000 and a leap year");
        }
    }else {printf("A given year is grater than 2000 and not a leap year");}
}
else{
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                printf("A given year is lesser than 2000 and a leap year");
            }else{printf("A given year is lesser than 2000 and not a leap year");}
        }else{
            printf("A given year is lesser than 2000 and a leap year");
        }
    }else {printf("A given year is lesser than 2000 and not a leap year");}
}


    return 0;
}