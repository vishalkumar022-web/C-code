//FOR :----->
//     *
//    ***
//   *****
//    ***
//     *
#include<stdio.h>
int main(){


int n ; 
printf("Enter your Row  number ");
scanf("%d",&n);
int nsp = n /2 ;   int nst = 1 ;  int a = n/2+1 ;//  = 3 ;
for (int i = 1 ; i<=n ; i++){
    for (int j =1 ; j<=nsp ;j++){
            printf(" ");
    }
    
    for (int k = 1 ; k<=nst ; k++){
        printf("* ");
    }
    if (i<a){
        nsp-- ;
        nst+=2 ; // nst = nst + 2 ; 
    }
        else {
            nsp++ ;
            nst-=1;
        }
        printf("\n");
}
    return 0 ;
}


// FOR :-----> 
//       *
//      **
//     ***
//    ****
//     ***
//      **
    //   *

// #include<stdio.h>
// int main(){
// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);
// int nsp = n - 1 ;   int nst = 1 ;  int a = n/2+1 ; 
// for (int i = 1 ; i<=n ; i++){
//     for (int j =1 ; j<=nsp ;j++){
//             printf(" ");
//     }
    
//     for (int k = 1 ; k<=nst ; k++){
//         printf("*");
//     }
//     if (i<a){
//         nsp-- ;
//         nst++ ;
//     }
//         else {
//             nsp++ ;
//             nst--;
//         }
//         printf("\n");
// }
//     return 0 ;
//}

//FOR :--->
// *
// **
// ***
// **
// *
// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
//     int nst = 1 ;   int a = n/2+1 ;
// for (int i = 1 ; i<=n ;i++){
//     for (int j = 1 ; j<=nst ; j++){
//         printf("*");
//     }
//     if (i<a){
//         nst++ ;
//     }
//     else {
//         nst--; 
//     }
//         printf("\n");

// }
//     return 0 ;
// }