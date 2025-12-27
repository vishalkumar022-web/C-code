
//print fractional part of a number :--
#include<stdio.h>
int main(){

double x = 56661356.545155852 ;

printf("x = %lf", x);

 long  y = (long) x ; 
printf ("\n y = %ld", y);
float z = x - y ;
printf("\n z = %f", z);

    return 0; 
}