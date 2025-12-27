#include<stdio.h>
int main(){

int x , y ;
printf("Enter the value of x , y");
scanf("%d%d",&x,&y);
if(x==0 && y==0) {
    printf("cordinate lies on Origin  ");
}
else if(x==0){
    printf(" cordinates lies on y axis");
}
else{
    printf("cordinates lies on x axis");
}

    return 0 ;                
}