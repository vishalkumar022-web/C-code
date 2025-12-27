#include<stdio.h>
int main(){
    int i ;
    printf("Enter your 1st number ");
    scanf("%d",&i);
    int n ;
    printf("Enter your 2nd number ");
    scanf("%d",&n);

    while (i<=n){
        for (int a = 1 ; a<=10 ; a++){
            printf("%d*%d = %d\n",i ,a ,a*i);
        }
            i++  ; 

    }

    return 0 ;
}