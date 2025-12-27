#include<stdio.h>
int main(){

int n;
printf ("enter the value of n:");
scanf ("%d",&n);

if (n>0){
    printf ("n is +ve no. ");
}


else{
    if(n==0){
        printf("n is = 0");
    }
    else{
        printf("n is -ve no. ");
    }
}

    return 0;
}