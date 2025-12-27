#include<stdio.h>
int main(){

int i ; int rev = 0 ;
printf("enter your 1st number ");
scanf("%d",&i);
int n ; 
printf("enter your 2nd number ");
scanf("%d",&n);

for( ; i<=n ; i++){
  int e = i ;
  rev = 0 ;
  while(e>0){
    int rem = e %10 ;
      rev = rev * 10 + rem ;
      e =e/10 ;
  }
  if (rev==i){
    printf("palidron number b/w the range is = %d\n",i);
  }
}



  return 0 ;
}