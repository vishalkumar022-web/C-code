#include<stdio.h>
int main(){

int n;
printf ("Enter the value of n :");
scanf("%d",&n);

if(n>=0){
    if(n>0){
        printf("n is +ve no.");
    }
    else{
        printf("n is = zero ");
    }
}

else{
    printf("n is -ve no. ");
}




    return 0;
}