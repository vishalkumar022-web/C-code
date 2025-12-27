#include<stdio.h>
int main(){

int n ;
printf("Enter the value of n ");
scanf("%d",&n);

int Rem = 0 ;
int Reverse = 0 ;

while (n>0){ // terminating conditon 

Rem = n % 10 ;  // repeatative task 


Reverse = Reverse*10 + Rem ;  // repeatative task 

n = n /10 ;  // updation 

}
printf("reverse of your given is = %d ",Reverse);

    return 0;
}