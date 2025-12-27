#include<stdio.h>
int pattern(int n){
    for (int i = 1 ; i<=n ; i++){
        for (int j = 1 ; j<=i ;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

pattern(n);
 

    return 0 ;
}