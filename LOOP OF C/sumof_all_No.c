// #include<stdio.h>
// int main(){

// int i ;
// printf("Enter your 1st value ");
// scanf("%d",&i);
// int n ;
// printf("Enter your 2nd value ");
// scanf("%d",&n);

// int sum = 0 ;

// while (i<=n){

//     sum = sum + i ;
//     i = i +1 ;

// }
// printf("sum of all number = %d",sum);

//     return 0 ;
// }

// USE of For loop ;

#include<stdio.h>
int main(){

int i ;
printf("Enter your 1st value ");
scanf("%d",&i);
int n ;
printf("Enter your 2nd value ");
scanf("%d",&n);

int sum = 0 ;

for(;i<=n;i++){

    sum = sum + i ;
    
}
printf("sum of all number = %d",sum);

    return 0 ;
}