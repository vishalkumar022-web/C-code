
#include<stdio.h>
int main(){
int a;

char  y ;

printf("Enter the value of y :- ");
scanf(" %c",&y);

if (y>='a'&& y<='z'){
    a = 1 ;
}
else if (y>='A' && y<='Z'){
a = 2 ;
}
else if (y>= '0' && y <='9'){
    a= 3 ;
}
else {
    a=4;
}
switch (a){
case 1 : 
printf("lowercase");
break;

case 2 : printf("uppercase");
break;

case 3: printf("dighits ");
break;

case 4: printf("special characters ");
break ;

default:
printf(" input invalid values ");
}



return 0;
}