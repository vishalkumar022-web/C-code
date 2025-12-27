#include<stdio.h>
void check_palidron(int n , int reverse, int b  ){
      
    if (b==0){
        if(reverse==n){
            printf("%d is palidron number ",n);
        }
        return ;
    }
  
        reverse = reverse*10 + b%10 ;
    
    check_palidron(n,reverse,b/10);
}
void palidron(int n , int m ){
    if (n>m){
        return ;
    }
    check_palidron(n,0,n);
    palidron(n+1,m);
}

int main(){

int n ,m ;
printf("Enter your number ");
scanf("%d%d",&n,&m);

palidron(n,m);

    return 0 ;
}