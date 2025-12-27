// FOR :--
// ****
//  ***
//   **
//    *

// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int nsp = 0 ;  int nst = n ;
// for(int i = 1 ; i<=n ; i++){
//     for (int j = 1 ; j<=nsp ;j++){
//         printf(" ");
//     }

//     for (int k = 1 ;k<=nst ;  k++){
//         printf("*");
//     }
//     printf("\n");
//         nsp ++ ;
//         nst--;
// }
//     return 0 ;
// }



// FOR :--> 
// * * * * 
//  * * * 
//   * * 
//    * 
// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int nsp = 0 ;  int nst = n ;
// for(int i = 1 ; i<=n ; i++){
//     for (int j = 1 ; j<=nsp ;j++){
//         printf(" ");
//     }

//     for (int k = 1 ;k<=nst ;  k++){
//         printf("* ");
//     }
//     printf("\n");
//         nsp ++ ;
//         nst--;
// }
//     return 0 ;
// }


// FOR :---> 
// *****
//  ***
//   *
// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int nsp = 0 ;  int nst = n ;
// for(int i = 1 ; i<=n ; i++){
//     for (int j = 1 ; j<=nsp ;j++){
//         printf(" ");
//     }

//     for (int k = 1 ;k<=nst ;  k++){
//         printf("*");
//     }
//     printf("\n");
//         nsp ++ ;
//         nst-=2 ;
// }
//     return 0 ;
// }


//FOR :----> 
// ****
// ***
// **
// *
#include<stdio.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

int nst = n ;
for (int i =1 ; i<=n ; i++){
    for(int j = 1 ; j<= nst; j++){
        printf("*");
    }
    nst-- ; 
    printf("\n");
}
    return 0 ;
}