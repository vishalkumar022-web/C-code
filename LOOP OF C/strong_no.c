#include<stdio.h>
int main(){

int n ;  int rem = 0 ; int c = 1 ;  int sum = 0 ;
printf("enter your number ");
scanf("%d",&n);

int d = n ;
while(d>0){
rem = d %10 ;
  c = 1 ;

for (int i =1 ; i<=rem;i++){
    c = c*i ;
    }

    sum = sum +c ;
d = d/10 ;
}

if (sum == n ){
    printf("strong number ");
}
else {printf("not a strong number ");}




    return 0 ;
}