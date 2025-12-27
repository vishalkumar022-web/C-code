#include<stdio.h>
int main (){

float a ,b ;
printf("enter the value of a , b");
scanf("%d%d",&a,&b);

float c = (a>b && b<a);
float d = (a > b)|| (b<a) ;
float e = (a>= b) && (b<=a);
float f = (a>= b) ||(b<=a);
float g = (a>= b) ||(b==a);
// printf("c = %f\n",c);
// printf("d = %f\n",d);
// printf("e = %f\n",e);
// printf("f = %f\n",f);printf("g = %f\n",g);
printf("c =%f\n d= %f\n e = %f\n f = %f\n g = %f\n",c ,d ,e, f ,g );




    return 0 ;
}