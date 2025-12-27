#include<stdio.h>
int main(){

int electric_bill ;
float amount ;

printf("Enter your Electric Bill :- ");
scanf("%d",&electric_bill) ;

if (electric_bill <= 50){
    amount = electric_bill*0.5 ;
}
else if (electric_bill>50 && electric_bill<=100){
    amount = electric_bill*0.75 ;
}

else if (electric_bill>100 && electric_bill<=200){
    amount = electric_bill*1.20 ; }

 else if (electric_bill>200){
    amount = electric_bill*1.50 ;

 }
else {
    printf("Invalid bill");
}

printf("Your electric charge = %f",amount);

    return 0 ;
}
