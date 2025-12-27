#include<stdio.h>
#include<string.h>

typedef struct rectangle{
    int length ;
    int breadth ;
}rectangle;
int main(){

rectangle x ;
printf("Enter the length of a Rectangle ");
scanf("%d",&x.length);
printf("Enter the Breadth of a Rectangle ");
scanf("%d",&x.breadth);


printf("\nArea of a Rectangle = %d   \nPerimeter of a rectangle = %d",x.breadth*x.length,2*(x.breadth+x.length));
    return 0 ;
}