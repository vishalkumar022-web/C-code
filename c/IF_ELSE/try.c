#include<stdio.h>
int main(){

int a = 50 ;

a++ ;// 51
printf("a = %d\n", ++a);  // 51   internal = 52 

a-- ;  // 52-1= 51

printf("a = %d\n",a);  // 51
++a ;
a = 20 ;
printf("a = %d\n",a--);



printf("a = %d\n",a);

a++ ;

printf("a = %d\n",++a);

printf("a = %d\n",a--);

--a ;

printf("a = %d\n",a);

return 0 ;

}



