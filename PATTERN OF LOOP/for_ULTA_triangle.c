// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);

// for (int i = 1 ; i<=n ; i++){
//     for (int j = 1 ; j<=(n+1)-i ; j++){
//         printf("*");
//     }
//     printf("\n");
// }

//     return 0 ;
// }


//FOR :---->   2nd Method to Solve--> 

// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);
// int a = n+1 ;
// for (int i = 1 ; i<=n ; i++){
    
//     for (int j = 1 ; j<=a-i ; j++){
//         printf("*");
//     }
//     printf("\n");
// }

//     return 0 ;
// }


// FOR :---- 3rd Method To Solve ---->

#include<stdio.h>
int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);
int a = n ;
for (int i = 1 ; i<=n ; i++){
    
    for (int j = 1 ; j<=a ; j++){
        printf("*");  
    }
    printf("\n");
      a-- ;
}

    return 0 ;
}


// FOR :--->   1  2  3  4
//             1  2  3           ---->
//             1  2 
//             1  


// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);
// int a = n ;
// for (int i = 1 ; i<=n ; i++){
//     int b = 1 ;
//     for (int j = 1 ; j<=a ; j++){
//         printf("%d",b);
//         b++ ;  
//     }
//     printf("\n");
//       a-- ;
// }

//     return 0 ;
// }


// FOR ---->   1 2 3 4
//             5 6 7
//             8 9 
//             10


// #include<stdio.h>
// int main(){

// int n ; 
// printf("Enter your number ");
// scanf("%d",&n);
// int a = n ;   int b = 1 ;
// for (int i = 1 ; i<=n ; i++){
    
//     for (int j = 1 ; j<=a ; j++){
//         printf("%d",b);
//         b++ ;  
//     }
//     printf("\n");
//       a-- ;
// }

//     return 0 ;
// }
