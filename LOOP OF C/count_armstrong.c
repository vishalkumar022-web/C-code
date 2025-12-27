//Write a program to take two number from user and print Armstrong numbers between the 
  // given range
 //Ex:   input :num1=11 , num2=400.               output : Armstrong numbers =  153 , 370 , 371

#include<stdio.h>
int main(){

int i ;  int n ; int d = 0 ; int count = 0 ; int power = 1; int sum = 0 ;
printf("enter your 1st number ");
scanf("%d",&i);
printf("enter your 2nd value ");
scanf("%d",&n);

for(;i<=n;i++){
d = i ;
sum = 0 ;
count = 0 ;

    for(;d>0;count++){
        d = d/10 ;
    }
    d = i ;
    while(d>0){
        int rem = d%10 ;
        power = 1 ;
        
        for(int i = 1; i<=count ;i++){
            power = power * rem  ;
        }
        sum = sum + power;
        d = d/10 ;
    }

if(sum==i){
    printf("%d is armstrong number\n   ",i);
}
}
    return 0 ;

}
