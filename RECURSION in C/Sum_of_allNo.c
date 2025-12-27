#include<stdio.h>
int Sum_of_allNUmber(int a , int b ,int sum  ){
    
    if(a>b){
        return sum  ;
    }
        sum = sum + a ;
        a++ ;
    Sum_of_allNUmber(a,b,sum);
   
}
int main(){

    int a, b ;
    printf("Enter your numbers ");
    scanf("%d%d",&a,&b);

  int m = Sum_of_allNUmber(a,b,0);  

printf("sum of all number in Range = %d",m);


    return 0 ;
}