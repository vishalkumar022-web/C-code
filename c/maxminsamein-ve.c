#include<stdio.h>
int main(){

int a , b ;
printf ("enter the value of a,b:-");
scanf ("%d%d",&a,&b);

if (a>b){
    printf("a is max. and b is min.");
}
else{
    if(a==b){
        printf("a is same as b");
    }
    else{
        printf("b is max and a is min.");
    }
}

    return 0; 
}

