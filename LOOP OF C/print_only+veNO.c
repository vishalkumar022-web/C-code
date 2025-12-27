#include<stdio.h>
int main(){

int n ;

while (n>=0){
    printf("Enter the value of n ");
    scanf("%d",&n);

    if(n<0){
        break;
    }

}
printf("it found -ve number ");

    return 0 ;
}