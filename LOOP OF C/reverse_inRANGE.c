#include<stdio.h>
int main(){

int i ;    int reverse = 0 ;  int rem = 0 ; 
printf ("Enter your 1st number ");
scanf("%d",&i);
int n ;
printf("Enter your 2nd number ");
scanf("%d",&n);

while(i<=n){
    rem = 0 ;    reverse = 0 ;
    for(int a = i ; a>0 ;a = a/10 ) {
        rem = a%10 ;
        reverse = reverse*10 + rem ;
    }

    printf("reverse of given %d is = %d\n ",i, reverse );
        i++ ;

}
    return 0 ; 
}