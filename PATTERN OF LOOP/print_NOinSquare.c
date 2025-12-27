// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);

// for (int i = 1 ; i<=n ; i++){
//     int a = 1 ;
//     for(int j = 1 ; j<=n ; j++){
//         printf("%d ",a);
//         a++ ;
//     }
//     printf("\n");
// }
//     return 0 ;
// }

// // FOR :---              1  2  3   4  
// //                       5  6   7   8
// //                       9  10  11  12   

// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int a = 1 ;
// for (int i = 1 ; i<=n ; i++){
    
//     for(int j = 1 ; j<=n ; j++){
//         printf("%d ",a);
//         a++ ;
//     }
//     printf("\n");
// }
//     return 0 ;
// }

// FOR :--          A  B  C  D 
//                  E  F  G  H
//                  I  J  K  L
//                  M  N  O  P 


// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int a = 65 ;
// for (int i = 1 ; i<=n ; i++){
    
//     for(int j = 1 ; j<=n ; j++){
//         printf("%c ",a);
//         a++ ;
//     }
//     printf("\n");
// }
//     return 0 ;
// }


// FOR :----          A  B  C  D 
//                    A  B  C  D   
//                    A  B  C  D 
//                    A  B  C  D  

#include<stdio.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

for (int i = 1 ; i<=n ; i++){
    int a = 65 ;                                    // Agar sirf AAAA karke 4 row tk print karna 
                                                    // hai  toh sirf updation wala part a++ ko hata 
                                                    //   dijiye .. 
    for(int j = 1 ; j<=n ; j++){
        printf("%c ",a);
        a++ ;
    }
    printf("\n");
}
    return 0 ;
}