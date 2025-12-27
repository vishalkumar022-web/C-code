#include<stdio.h>

void table (int a ){
    for(int i= 1 ; i<=10 ;i++){
        int n = a*i ;
        printf("%d * %d = %d \n",a,i,n);
    }
  
}

int main(){

int a ;
printf("Enter your number ");
scanf("%d",&a);


 table(a);


    return 0 ; 
}
//   through recursion