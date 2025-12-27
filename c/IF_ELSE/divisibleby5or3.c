#include<stdio.h>
int main (){

int n ;
printf ("enter the value of n :");
scanf("%d",&n);

if(n%5==0 ){ 
     if(n%9==0)
    printf("n is divisible by 5 and 9");
    else{printf("n is  divisible by 5 only ");}
  }  
  
  else{
        if(n%9==0){
            printf("n is divisible by 9 only ");
        }
        else{printf("n is not divisible by 5 and 9");}
  }

// if(n%5==0 && n%9==0){
//     printf("n is divisible by both 5 and 9");
// }
// else if(n%5==0){printf("n is divisible by 5 not 9 ");}
// else if(n%9==0){printf("n is divisible by 9 not 5");}
    
// else{printf("n is not divisible by both 5 and 9 ");}

    return 0;
}

