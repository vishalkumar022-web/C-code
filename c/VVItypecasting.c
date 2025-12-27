
//Write a program to show how to change a char to int and
// an int to char using type casting.


#include<stdio.h>
int main (){

int a = 145 ;   char x ='@' ;
char v = (char)a ;
printf("v= %c\n",v);

double d = (double)a ;
printf("d = %lf",d);// (a ka value d me store karna hai isliye jisme store karna hai uska 
                     //formt specifier and uska hi variable put hogaa..)

int c =(int)x ;
printf("\n c = %d",c);




    return 0 ;
}