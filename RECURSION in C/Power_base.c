#include<stdio.h>
int power_base(int a, int b , int n ){
    
    if (b==0){
        return n ;
    }
    n = n * a ;
    b-- ;
    power_base(a,b,n);
}
int main(){

int a  ;
printf("Enter your Base number ");
scanf("%d",&a);
int b ;
printf("Enter your power ");
scanf("%d",&b);

int m = power_base(a,b,1);

printf("%d ",m);



    return 0 ;
}