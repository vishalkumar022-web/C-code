// #include<stdio.h>
// int factorial(int n ){
//     int c = 1 ;
//     for (int i = 1 ; i<=n ; i++){
//         c = c* i ;
//     }
//     return c ;
// }
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);

// int m = factorial(n);

// printf("Factorial of given number is %d",m);

//     return 0 ;
// }

// through Recursion 

#include<stdio.h>
int factorial (int n ){
    if (n==1){
        return 1 ;
    }
    return n * factorial(n-1);
}
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

int m = factorial(n);
printf("factorial of a given number is %d ",m);


    return 0 ;
}