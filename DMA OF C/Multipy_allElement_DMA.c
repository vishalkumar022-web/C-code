#include<stdio.h>
#include<stdlib.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

int*arr = (int*)calloc(n,sizeof(int));

for (int i = 0 ; i<n ;i++){
    scanf("%d",&arr[i]);
}

int multi = 1 ;

for (int i = 0 ;i<n ;i++){
    multi = multi*arr[i] ;
}
printf("The Product of all element is = %d ",multi);

    return 0 ;
}