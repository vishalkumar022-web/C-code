#include<stdio.h>
int main(){

int n ; int sum = 0 ;

while (n>=0){
    printf("enter the value of n ");
    scanf("%d",&n);
    
    
    if (n<0){
        break;
    }
    sum = sum + n ;
}

printf("-ve number \n");
printf("SUM of all positive number = %d",sum);



    return 0 ;
}