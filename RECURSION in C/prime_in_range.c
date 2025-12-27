#include<stdio.h>
void check_prime(int a , int i , int count  ){
    if(i>a){
        if(count ==2 ){
            printf("%d is a prime number \n",a);
        }
        else{
            printf("%d is not a prime number\n ",a);
        }
        return ;
    }
    if (a%i==0){
        count++ ;
    }
    check_prime(a,i+1,count);
}
void prime(int a , int b ){
    if (a>b){
        return ;
    }
    check_prime(a,1,0);
    prime(a+1,b);

}
int main(){

int a , b ;
printf("Enter your number ");
scanf("%d%d",&a,&b);

prime(a,b);

    return 0 ;
}