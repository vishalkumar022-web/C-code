// #include<stdio.h>
// int num(int a);
// int main(){

// int b ;
// printf("enter your number");
// scanf("%d",&b);

// int m = num(b);

// if (m==1){
//     printf("%d is even ",b);
// }
// else {
//     printf("%d is odd ",b);
// }

//     return 0 ;
// }
// int num(int a ){
//     if (a%2==0){
//         return 1;
//     }
//     else{
//        return 0 ;
//     }
    
// }


#include<stdio.h>
int odd_even(int a){
    if (a%2==0){
        return 1 ;
    }
    else{
        return 0 ;
    }
    
}
int main(){
int m ;
printf("Enter your number ");
scanf("%d",&m);

    int b = odd_even(m);
    (b==1)?printf("%d is Even number",m):printf("%d is odd number ",m);

    return 0 ;
}
