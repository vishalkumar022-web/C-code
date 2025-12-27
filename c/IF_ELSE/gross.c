#include<stdio.h>
int main(){

int Basic , HRA , DA ;
printf("Enter your Basic Salary ");
scanf("%d",&Basic);
printf("enter your HRA ");
scanf("%d",&HRA);
printf("Enter your DA ");
scanf("%d",&DA);


if (Basic<10000){
    printf(" Gross =%d",(Basic+(Basic*HRA/100)+(Basic*DA/100)));
}

else if (Basic>20001){
    printf(" Gross =%d",(Basic+(Basic*HRA/100)+(Basic*DA/100)));
}



    return 0 ;
}