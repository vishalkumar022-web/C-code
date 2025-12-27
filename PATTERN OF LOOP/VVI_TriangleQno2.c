// FOR --->      *
//             * *
//           * * *
//         * * * *

// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int a = n-1 ;  int b  = 1 ;
// for (int i = 1; i<=n ; i++ ){
//     for (int j = 1 ; j<=a ;j++){
//         printf(" ");
//     }
//     for (int k = 1 ; k<=b ; k++){
//             printf("*");
           
//     }
//     a-- ;
//      b++ ;
//     printf("\n");
// }

//     return 0 ;
// }

// 2nd method to solve this Question :--> 

#include<stdio.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

for (int i =1 ; i<=n ;i++){
    for (int j =1 ; j<=n-i ; j++){
        printf(" ");
    }
    for (int k = 1 ; k<=i ; k++){
        printf("*");
    }
    printf("\n");
}

    return 0 ;
}