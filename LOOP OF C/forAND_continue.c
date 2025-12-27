#include<stdio.h>
int main(){


int n ; int i = 1 ; 
printf("enter your number:- ");
scanf("%d",&n);

for(;i<=n;i++){
    if(i%2==0){
        continue;
    }
    printf("%d",i);
    
}


    return 0 ;
}