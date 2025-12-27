#include<stdio.h>
int main(){


int i = 1 ; int sum = 0 ;
int n ;
printf("enter your value ");
scanf("%d",&n);

while(i<=n){

if (i%2==0){
    i++;
    continue;
}
sum = sum + i ;
i++;
}

printf("sum of all odd number between these two number is %d",sum);

    return 0 ;
}