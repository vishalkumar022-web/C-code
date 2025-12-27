#include<stdio.h>
int main(){

int n; 
printf("enter the value of n :");
scanf("%d",&n);
 
if(n>0){
    printf("n = %d", n);
}
else{
    n = n*(-1) ;
    printf("n = %d",n);
}

return 0 ;

}
