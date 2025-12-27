#include<stdio.h>
int main(){

int a , b ; int c ;
printf("Enter the value of a ");
scanf("%d",&a);
printf("ENTER YOUR NUMBER ACC. TO  Their choice\n  1- sum \n 2- difference \n 3- multiply\n  4- Division\n  5- modulus ");

printf("\n Enter your Number  ");
scanf("%d",&c);
printf("Enter the value of b ");
scanf("%d",&b);

switch (c){
    case 1 :printf("sum = %d\n",a+b);
    break;

    case 2 : printf("difference = %d\n",a-b);
    break;

    case 3 : printf("multiple = %d\n",a*b);
    break;

    case 4 : printf("division = %d\n",a/b);
    break;
    case 5 : printf("modulus = %d\n",a%b);
    break;

    default: printf("invalid Operators");
} 

    return 0;
}