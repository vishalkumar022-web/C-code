#include<stdio.h>
int main(){

int i = 2 ;        int c = 0;
int n =9;

while(i<=(n-1)){

    if (n%i==0){
        c++ ;
        break;
    }
    i++ ;
}

if (c==0 )
printf("prime ");
else {
    printf("not prime");
}

    return 0 ;
}