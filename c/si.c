#include<stdio.h>
int main(){ 

float p,r,t,si;

printf("Enter principal : radius : time :");
scanf("%f %f %f", & p ,& r ,& t);


si = (p*r*t)/100;
printf (" your simple interest is : %f = %f*%f*%f/100", si,p,r,t);

    return 0;
} 