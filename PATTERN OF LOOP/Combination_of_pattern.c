// A1B2
// C3D4
// E5F6
// G7H8


// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your row number ");
// scanf("%d",&n);
// int m ;  int a = 1 ;   int c = 65 ;
// printf("Enter your column number ");  
// scanf("%d",&m);

// for (int i =1 ; i<=n ;i++){
//     for (int j = 1 ; j<=m ; j++){
//         if (j%2==0){
//             printf("%d",a);
//         a++ ;  
 
//         }
//         else{
//             printf("%c",c);
//         c++ ;
//         }
//     }
// printf("\n");

// }

//     return 0 ;
// }




// *#*#*
// #*#*#
// *#*#*



// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your row number ");
// scanf("%d",&n);
// int m ; 
// printf("Enter your column number ");  
// scanf("%d",&m);

// for (int i =1 ; i<=n ;i++){
//     for (int j = 1 ; j<=m ; j++){
        
//         if(i%2==1){
//         if (j%2==1){
//             printf("*");
//         }
//         else{
//             printf("#");

//         }
//     }
//     else{
//         if (j%2==1){
//             printf("#");
//         }
//         else{
//             printf("*");

//         }
//     }
// }
// printf("\n");

// }

//     return 0 ;
// }




// *#*#*
// *#*#*
// *#*#*
// *#*#*



#include<stdio.h>
int main(){

int n ;
printf("Enter your row number ");
scanf("%d",&n);
int m ; 
printf("Enter your column number ");  
scanf("%d",&m);

int a = 97 ;
for (int i =1 ; i<=n ;i++){
    for (int j = 1 ; j<=m ; j++){
       printf("%c  ",a);
       a++ ;
    }
   
printf("\n");
}

    return 0 ;
}
