// #include<stdio.h>
// void increasing(int n){
//     for (int i = 1; i<=n ;i++){
//         printf("a = %d\n",i);
//     }
// }
// int main(){

// int n ;
// printf("Enter your number ");
// scanf("%d",&n);

// increasing(n);


//     return 0 ;
// }

//using Recursion 
#include<stdio.h>
void increasing (int i , int n ){
    if (i>n){
        return ;
    }
    printf("i = %d\n ",i);
    increasing(i+1,n);
}
int main(){

    int i ,n ;
    printf("Enter your number ");
    scanf("%d%d",&i,&n);

increasing(i,n);

    return 0 ;
}