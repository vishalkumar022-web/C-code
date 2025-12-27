#include<stdio.h>
int three_no_Max(int a , int b , int c ){
    if (a>b){
        if(a>c){
            return a ;
        }
        else { return c ;}
    }
    else{
        if (b>c){
            return b ;
        }
        else {
            return c ;
        }
    }

}
int main(){

int a , b , c  ;
printf("Enter your numbers ");
scanf("%d%d%d",&a,&b,&c);


int m = three_no_Max(a,b,c);

if (m==a){
    printf("%d is max ",a);
}
else if (m==c){
    printf("%d is max ",c);
}

else {
    printf("%d is max ",b);
}
 
    return 0 ;

}