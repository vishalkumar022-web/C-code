#include<stdio.h>
int main(){


int n ;
printf("enter the value of n: ");
scanf("%d",&n);

if (n>99 && n<1000){
    if(n%2==0){
        printf("n is three dighit number and even ");
    }
    else{printf("n is three dighits odd number");}
}
else{
     if(n%2==0){
            printf("n is not a three dighits number but even ");
        }else{printf("n is not a three dighits number but odd");}

    }
// if((n>99 && n<1000)&&(n%2==0)){
//     printf("n is three dighit even no.");
// }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
// else if((n>99 && n<1000)&&(n%2==1)){
//     printf("n is three dighit odd no.");}

// else if(!(n>99 && n<1000)&&(n%2==1)){
//     printf("n is not three dighit but odd no.");}


// else if(!(n>99 && n<1000)&&(n%2==0)){
//     printf("n is not three dighit but even no.");}

// else {printf("invalid input");}


    return 0;
}