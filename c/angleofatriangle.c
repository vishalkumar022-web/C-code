#include<stdio.h>
int main(){

float a , b , c ;
printf("Enter a angle of a triangle :- ");
scanf("%f%f%f",&a,&b,&c);

if (a+b+c==180){printf("angles are valid to form a triangle");

}
else{
    printf("angles are not valid to form a triangle");
}





    return 0 ;
}