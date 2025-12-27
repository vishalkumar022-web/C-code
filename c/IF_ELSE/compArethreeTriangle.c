#include<stdio.h>
int main (){

int x , y , z ; 
printf("Enter your sides of a triangles:- ");
scanf("%d%d%d", &x ,&y ,&z);

if (x==y && y==z){
    printf("A given Triangle is equillateral  ");
}
else if (x!=y && y!=z){
    printf("A given Triangle is scalene ");
}
else if (x==y && x!=z|| y!=z){
    printf("A given triangle is isoscelenes  ");
}

else { printf(" A given triangle is not valid ");}


    return 0 ;
}