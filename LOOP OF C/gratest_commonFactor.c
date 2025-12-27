#include<stdio.h>
int main(){

int i ;  int d = 0  ;
printf("enter your 1st value ");
scanf("%d",&i);
int n ;
printf("enter your 2nd number ");
scanf("%d",&n);
  
i<n;

for(int a = 1 ; a<=i ; a++){
    if (i%a==0 && n%a==0){
       d =a ;
    }
}
printf("%d is a common factor of %d and %d ",d,i,n);

    return 0 ;
}