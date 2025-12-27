#include<stdio.h>
int main (){

int a = 6  , b= 3 ;

int result = !(a&1)? a>>1  : b<<1 ;

// a= 6 -- 110 , 1 = 1  and when 6 & 1 therefore evaluate 110 and 001  that's
//result 6 & 1 is become 0. and acc, to ques. !(0) means 1 that means true means
// condition become true so, print a>>1 value 6 right shift 1 :- 110 become right
//shift become 11 . so , decimal conversion of 11 is 3 

// hence result is 3 .. 




printf("result = %d", result );




    return 0 ;
}