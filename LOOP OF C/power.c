#include<stdio.h>
int main(){
int power = 1;
int base ;
printf("enter your base number ");
scanf("%d",&base);

int n ;
printf("enter the value of n  ");
scanf("%d",&n);

for (int i = 1; i<=n ; i++){
    power = base * power ;
}

printf("power of given number is = %d",power);

    return 0 ;
}