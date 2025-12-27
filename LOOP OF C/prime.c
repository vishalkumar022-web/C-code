#include<stdio.h>
int main(){

int i =2 ;  int c =0 ;
int n ;
printf("enter your value of n ");
scanf("%d",&n);

while(i<=(n-1)){
    if (n%i==0){
        c++;
    }
    i++ ;
}
if (c==0)
printf("prime");
else{
    printf("composite");
}

    return 0;
}