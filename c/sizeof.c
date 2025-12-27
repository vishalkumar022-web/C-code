#include<stdio.h>
int main(){

int a; 
char b; long c; double d;   float e;

printf("int size = %d byte \n", sizeof(a) );
printf("char size = %d byte \n", sizeof(b));
printf("long size = %d byte \n", sizeof(c)); 
printf ("double size = %d byte \n", sizeof(d));
printf("float size = %d byte",sizeof(e));

    return 0;
}