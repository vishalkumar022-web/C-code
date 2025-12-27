#include<stdio.h>
int main(){

int n ;  int reverse = 0 ; int rem = 0 ; int b = 0 ;
printf("enter your number ");
scanf("%d",&n);

b = n ;

while(b>0){
    rem = b%10 ;
    reverse= reverse*10 +rem ;
    b  = b/10 ;
}

if(reverse==n){
    printf("palidron number");
} 
else{
    printf("not a palidron no ");
}


    return 0 ;
}