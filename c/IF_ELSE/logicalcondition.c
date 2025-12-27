#include<stdio.h>
int main(){

int a , b ;
printf("enter the value of a , b ");
scanf ("%d%d", &a ,&b);

int c = ( a && b) ;
printf("c = %d",c);

printf("\n%d && %d = %d ", a , b, c);


    return 0;
}