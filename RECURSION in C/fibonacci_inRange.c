#include<stdio.h>
int  fibonacci (int n  ){
    if (n==0)return 0 ;
    else if (n==1){
        return 1 ;}
        else {
            return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){

int n , m ; int a = 0 ;
printf("Enter your number ");
scanf("%d%d",&n,&m);




while(1){
    int x = fibonacci(a);
    if (x>=m){
        break;
    }
    if (x>=n){
        printf("%d ",x);
        
    }
    a++ ;
}





    return 0 ;
}