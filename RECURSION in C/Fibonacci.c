#include<stdio.h>
int Fibbo(int n ){
    if (n==1 || n==2){
        return 1 ;
    }
    return Fibbo(n-1)+Fibbo(n-2);
}
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

int m = Fibbo(n);
printf("%d",m);


    return 0 ;
}