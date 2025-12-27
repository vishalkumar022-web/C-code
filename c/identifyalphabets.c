#include<stdio.h>
int main(){

char x  ;
printf("enter the value of x:- ");
scanf("%c",&x);

if (x>='a' && x<='z' ){
    printf (" X is a Alphabet");
}

else if (x>='A'&& x<='Z'){
    printf("X is a Alphabet");// in case of uppercase 
}


else {
    printf("X is not a alphazz");
}






    return 0;
}