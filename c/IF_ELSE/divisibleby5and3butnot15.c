#include<stdio.h>
int main(){

int n;
printf("Enter the value of n :-");
scanf("%d",&n);

// if((n%5==0 || n%3==0) && (n%15!=0))
//         {
//             printf("n is divisible by 5 and 3 but not divisible by 15");

//          }
        

// else{
//     printf("a required number is not matching for this condition ");
// }


if (n%5==0 ||n%3==0){
    if(n%15!=0){printf("n is divisible by 5 or 3 but not 15");}
    else {printf("n is also divisible by 15");}
}
else{printf("A number is not matching a required condition ");}

    return 0;
}