#include<stdio.h>
int main(){

int n ; int multi = 1 ;
printf("enter the value of  n ");
scanf("%d",&n);

for (int a= 1; a<=n ;a++){
    multi = multi * a ;
}
printf("multi=%d",multi);


    return 0 ;
}


