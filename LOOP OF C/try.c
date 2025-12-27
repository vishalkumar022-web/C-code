// #include<stdio.h>
// int main(){

// int n ;   int i ;     int power = 1 ;  int base = 1 ;
// printf("Enter your 1st number ");
// scanf("%d",&i);
// printf("Enter your 2nd number ");
// scanf("%d",&n);

// for( ; i<=n ;i++){
//     power = 1 ;
//     base = i ;
//     for(int j = 1 ; j<=i ; j++){
//         power = power * base ;
//     }
//     printf("%d\n",power);
// }

//     return 0 ;
// }

#include<stdio.h>
int main(){

int n ;      
printf("Enter your number ");
scanf("%d",&n);
int a = n/2+1 ;
for(int i = 1 ; i<=n ; i++){
    for (int j = 1 ; j<=n ; j++){
        if  (i==1 || i==n || j==1 || j==n || i==a){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
   
    printf("\n");
}

    return 0 ;
}