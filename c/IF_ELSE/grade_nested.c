#include<stdio.h>
int main(){

int n ;

printf("Enter the value of n ");
scanf("%d",&n);

if (n>91){
    if(n<100){
        printf( "exellent");
    }
}
else if(n>81){
    if(n<90){
        printf("Very Good ");
        
        }
    }
else if (n>71){
    if(n<80){
        printf("Good");
    }
}
else {
    printf("Average");
}

    return 0 ;
}