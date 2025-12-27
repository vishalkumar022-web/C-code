#include<stdio.h>
int main(){

int n ;
printf("enter your number ");
scanf("%d",&n);

// if (n>0 && n%2==0){
//     printf("n is positive and n is even ");
// }
// else if (n<0 && n%2==0) {printf("n is -ve number and even ");}

//   else if (n<0 && n%2==-1){
//     printf("n is -ve number and n is odd ");
// }
//  else{printf("n is +ve and n is odd ");}

if (n>0){
    if (n%2==0){
        printf("n is positive and even ");
    }else {printf("n is positive and odd");}
}
else{
    if (n%2==0){printf("n is negative and n is even  ");
    }else {printf("n is -ve and n is odd ");}
}

// (n>0)?(n%2==0)?printf("n is +ve and n is even "):printf("n is +ve and n is odd "):(n<0 && n%2==-1)?printf("n is -ve and n is odd"):printf("n is -ve and n is even ");


    return 0;
}