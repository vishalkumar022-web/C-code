#include<stdio.h>
int main (){

// unsigned char a ;
// printf("Enter the value of a :- ");
// scanf(" %c",&a);

// a%=2 ;
// printf("a = %d",a);

int a = 10 ;

a++ ;
printf("a= %d\n",a++);
++a ;
printf("a= %d\n",a);

printf("a= %d\n",a++);
printf("a= %d\n",++a);
++a ;

printf("a= %d\n",a++);
printf("a= %d\n",++a);
a++ ;

printf("a= %d\n",++a);
printf("a= %d\n",a++);

a++;
printf("a= %d",a);


// int a= 9 , b = 13 ;
// a = a^b ;
// b = a^b;
// a = a^b ;
// printf("a = %d\n b= %d",a,b);
return 0;
}