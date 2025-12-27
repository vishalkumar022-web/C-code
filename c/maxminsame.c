#include<stdio.h>
int main(){

int a , b  ; 
printf("enter the value of a,b");
scanf("%d%d",&a,&b);

if (a>=b){
    if(a>b){
        printf("a is max.");
    }
    else{
        printf("a = b");
    }
}
else{
    printf("B is max");
}

    return 0;
}