#include<stdio.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);
int a = n-1 ;   int b = n ;
for (int i =1 ; i<=n ; i++){
    for (int j = 1 ; j<=a ; j++){
        printf(" ");
    }
    for (int k = 1 ; k<=b ;k++){
        printf("*");
    }
    a-- ;
    printf("\n");
}
    return 0 ;
}