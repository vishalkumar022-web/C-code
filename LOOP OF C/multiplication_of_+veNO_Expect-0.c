#include<stdio.h>
int main(){

int n ; int multi= 1 ;

while (n>=0){
    printf("enter the value of n ");
    scanf("%d",&n);
    
    if (n==0){
        n++;
        continue;
    }

    if (n<0){
        break;
    }
    multi = multi*n ;
}

printf("-ve number \n");
printf("multiplication of all positive number = %d",multi);



    return 0 ;
}