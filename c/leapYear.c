#include<stdio.h>
int main(){


int year ;
printf("enter your year");
scanf("%d",&year);


if(year%4==0){
    if(year%100==0){
        if(year%400==0){
            printf("a given year is a leap ");
        }
        else {printf("a given year is not a leap year");}
    }else{printf("a given year is  a leap year");}
}

else{printf("a given year is not a leap year");}




    return 0;
}