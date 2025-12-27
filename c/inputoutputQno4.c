//Write a program to take  two floating-point number and two integer from the 
//user, and then print their sum and average (as float)

#include<stdio.h>
int main (){

int a, b ;
float c ,d ;
printf("Enter two value of int and two value of float: ");
scanf ("%d%d%f%f",&a,&b,&c,&d);

float sum = a+b+c+d ;
float average = sum/4;

printf ("sum = %f\n",sum);
printf ("average = %f ", average);

    return 0;
}