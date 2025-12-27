#include<stdio.h>
int main (){

int a , b, c ;
printf("enter the sides of triangle :-");

scanf("%d%d%d", &a , &b , &c);

if(a+b>c){
    if(b+c>a){
        if(c+a>b){
            printf("side are valid ");
        }
    }

}
else{
    printf(" sides are not valid to form a triangle ");
}




    return 0 ;
}