#include<stdio.h>
int main(){

    int i ;
    printf("enter your number ");
    scanf("%d",&i);
    int n ; int count = 0 ;
    printf("enter the value of n ");
    scanf("%d",&n);

    while (i+1<=n-1){
        count +=1 ;
        
        i++ ;
   
    }

printf("%d digits between them ",count);


    return 0;
}