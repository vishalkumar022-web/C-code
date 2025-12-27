#include<stdio.h>
int main (){

int a , b ;
char c ;
printf("enter your  1st number ");
scanf("%d",&a);
printf("enter your Symbol ");
scanf(" %c", &c);
printf("enter your  2nd number ");
scanf("%d",&b);

switch(c){

    case '+' : 
    printf(" Sum = %d",a+b);
    break; 
    
    case '-' : 
    printf("difference = %d",a-b);
    break;
    case '*': 
    printf("Multiple =  %d",a*b);
break;

    case '%' : printf("modulus = %d",a%b);
    break;
    case '/' : printf("divide = %d ",a/b);
break;
    default : printf("you Enter wrong Symbol ");
}


    return 0 ;
}