#include<stdio.h>
int main(){


int n ; int i = 1 ; 
printf("enter your number:- ");
scanf("%d",&n);

do{
    if(i%2==0){
        i++;
        continue;
    }
    printf("%d",i);
    i++;
}
while(i<=n);

    return 0 ;
}