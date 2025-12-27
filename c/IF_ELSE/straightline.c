#include<stdio.h>
int main(){

int x1 , x2 ;
printf("enter the value of 1st  cordinates ");
scanf("%d%d", &x1,&x2);

int y1 , y2  ;
printf("enter the value of 2nd cordinates ");
scanf("%d%d", &y1 ,&y2 );

int z1 ,z2 ;

printf("enter the value of 3rd  cordinates ");
scanf("%d%d", &z1,&z2);

int m1= (y2-x2)/(y1-x1) ;

int m2 = (z2-y2)/(z1-y1) ;

if (m1 == m2)

printf("All points lies on straight line ");

else {
printf("these three points does not lies on straight line");
}




    return 0;
}