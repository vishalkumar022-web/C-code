#include<stdio.h>
void pattern(int n ){
    for(int i = 1 ; i<=n ; i++){
        for (int j = 1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern1(int n ){
    for (int i =1 ; i<=n ;i++){
        for (int j = 1 ; j<=n ; j++){
            printf("*");
        }
        printf("\n");
    }
        }
int main(){
    int n ;
    printf("Enter  your number ");
    scanf("%d",&n);

    pattern1(n);
    pattern(n);

    return 0 ;
}