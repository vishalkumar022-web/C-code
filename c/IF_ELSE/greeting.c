#include<stdio.h>
int main(){

int age ;
printf("Enter your age ");
scanf("%d",&age);
char name ;
printf("Enter your name ");
scanf(" %c",&name);

printf("Hello %c your are %d year old.",name,age);


    return 0;
}