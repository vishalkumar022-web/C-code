#include<stdio.h>
int positive_negative(int a ){
    if(a>0){
        return 1  ;
    }
    else{return 0 ;}
}
int main(){

    int a ;
    printf("Enter your number ");
    scanf("%d",&a);

    int m = positive_negative(a);
    (m==1)?printf("%d is +ve number ",a): printf("%d is -ve number ",a);

    return 0 ;
}

