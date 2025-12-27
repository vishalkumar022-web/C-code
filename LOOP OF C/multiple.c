#include<stdio.h>
int main(){
 
int multi; int n = 0 ;
printf("enter your number ");
scanf("%d",&multi);

for(int i = 1;;i++){

     n = multi* i ;
   if(n>100){
    break;
   }
   printf("%d\n",n);
  
}    

    return 0 ;
}



