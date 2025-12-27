// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
//     int a = n-1 ;   int b = 1 ;
// for (int i =1 ; i<=n ; i++){
//     for (int j = 1; j<=a ; j++){
//         printf(" ");
//     }
//     int x = 65 ;
//     for (int k = 1 ; k<=b ; k++){
//         printf("%c ",x);
//             x++ ;
//     }
//     a-- ;
//     b++ ;
//     printf("\n");
// }
//     return 0 ;
// }

// FOR ---->     A 
//             A B C 
//            A B C D E 



// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
//     int a = n-1 ;   int b = 1 ;
// for (int i =1 ; i<=n ; i++){
//     for (int j = 1; j<=a ; j++){
//         printf(" ");
//     }
//     int x = 65 ;
//     for (int k = 1 ; k<=b ; k++){
//         printf("%c",x);
//             x++ ;
//     }
//     a-- ;
//     b+=2 ;
//     printf("\n");
// }
//     return 0 ;
// }


// FOR ---->     A 
//             B C D 
//            E F G H I 


#include<stdio.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);
    int a = n-1 ;   int b = 1 ;    int x = 65 ;
for (int i =1 ; i<=n ; i++){
    for (int j = 1; j<=a ; j++){
        printf(" ");
    }
    
    for (int k = 1 ; k<=b ; k++){
        printf("%c",x);
            x++ ;
    }
    a-- ;
    b+=2 ;
    printf("\n");
}
    return 0 ;
}

