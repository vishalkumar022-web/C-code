#include<stdio.h>
void  prime( int a, int b ){
    
for (;a<=b;a++){
    int count = 0 ;
    for (int i = 2 ; i<=a-1 ;i++){
        if (a%i==0){
            count ++ ;
        }
    }
    if(count==0){
        printf("%d is a prime number\n ",a);
    }
}
}
int main(){

int a , b ;
printf("Enter your number ");
scanf("%d%d",&a,&b);


prime(a,b);



    return 0 ;
}