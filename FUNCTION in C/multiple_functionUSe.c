#include<stdio.h>

int count(int a ){
int c = 0 ;
    for(;a>0;c++){
        a= a/10 ;
        
    }
    return c ;
}


int reverse(int a){
    int rev =0 ; int rem = 0 ;
    for (;a>0;a = a/10){
        rem = a%10 ;
        rev = rev*10 + rem ;
    }
    return rev ;
}



int main(){
    int a ;
    printf("Enter your number ");
    scanf("%d",&a);

int m = count(a);
printf("count of given number is %d\n ",m);

int s = reverse(a);
printf("reverse of given number is %d ",s );

    return 0 ;
}