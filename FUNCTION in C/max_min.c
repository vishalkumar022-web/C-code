#include<stdio.h>
int max_min(int a , int b ){
    if (a>b){
        return a ;
    }
    else{
        return b ;
    }
}

int main(){

int a , b ;
printf("enter your numbers ");
scanf("%d%d",&a,&b);

int m = max_min(a,b);
if (m==a){
    printf("%d is max ",a);
}
else{printf("%d is max "),b;}

    return 0 ;
}