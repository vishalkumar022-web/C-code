#include<stdio.h>
int main(){

int i = 1;
int c = 0;
int n ;
printf("enter your value of n ");
scanf("%d",&n);

while (i<=n){   // terminating condition ;
    if(n%i==0){
        c = c+1 ; // Repeatative task ;
    }
       i++ ;   // Updation ;
}
if (c==2){
    printf("n is prime");
}
else {printf("n is composite number ");}


    return 0;
}