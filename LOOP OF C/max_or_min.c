#include<stdio.h>
int main(){

int n ;  int max = 0  ; int min =9 ; int digit =0 ;
printf("Enter your number ");
scanf("%d",&n);

while (n>0){
    digit= n%10 ;
 if (digit>max){
   max = digit ;
}
if (digit<min){
   min = digit ;
} 
    n = n/10 ;

}
printf("max digit is =  %d\n",max);
printf("min digit is = %d", min);

return 0 ;
}