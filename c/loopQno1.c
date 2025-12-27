#include <stdio.h>
int main(){

int i , n ;
printf("enter the value of i:-");
printf("\n enter the value of n :-");
scanf("%d%d",&i,&n);
 
while(i<=n){
    printf(" %d",i);

    i = i+1 ; // i++, ++i ;
}



    return 0;
}