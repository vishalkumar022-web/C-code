#include<stdio.h>
int main(){

int i ; int sum = 0 ; int sum1 = 0 ;
printf("enter the value of i :- ");
scanf("%d",&i);
int n ;
printf("enter the value of n :- ");
scanf("%d",&n);

for  (;i<=n;i++){
if (i%2==0){
    sum = sum + i ;
}
else{
    sum1 = sum1+ i ;
}

}
printf("sum = %d\n",sum);
printf("sum of all odd number = %d",sum1);
    return 0;
}