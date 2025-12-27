#include<stdio.h>
int prime(int n ){
    int count = 0 ;
    for (int i = 2 ; i<=n-1 ; i++){
        if (n%i==0){
            count++ ;
        }
    }
    if (count==0){
        return 1 ;
    }
    else{
        return 0 ;
    }
}
int main(){

int n ; 
printf("Enter your number ");
scanf("%d",&n);

int m = prime(n);



if (m==1){
    printf("%d is a prime number ",n);
}
else {
    printf("%d is not a prime nummber ",n);
}

    return 0 ;
}