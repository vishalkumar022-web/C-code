// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);

// for(int i = 1 ; i<=n ; i++){
//     for (int j = 1 ; j<=i ; j++){
//         printf("* ");
//     }
//     printf("\n");
// }
//     return 0 ;
// }

// FOR :--     1 
//             1  2 
//             1  2  3 


// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);

// for(int i = 1 ; i<=n ; i++){
//         int a = 1 ;
//     for (int j = 1 ; j<=i ; j++){
//         printf("%d ",a );
//         a++ ;
//     }
//     printf("\n");
// }
//     return 0 ;
// }

// FOR :--    1 
//            2  3 
//            4  5  6 



// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);
// int a = 1 ;
// for(int i = 1 ; i<=n ; i++){
        
//     for (int j = 1 ; j<=i ; j++){
//         printf("%d ",a );
//         a++ ;
//     }
//     printf("\n");
// }
//     return 0 ;
// }                     // FOR Alphabets int a = 65 ; and %d ke jagh pr %c kar denge....


// FOR :--->     1 
//               1  3 
//               1  3  5 
//               1  3  5  7 



#include<stdio.h>
int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);

for(int i = 1 ; i<=n ; i++){
        int a = 1 ;
    for (int j = 1 ; j<=i ; j++){
        printf("%d ",a );
        a+=2  ;
    }
    printf("\n");
}
    return 0 ;
}                   