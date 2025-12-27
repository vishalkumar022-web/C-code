#include<stdio.h>
#include<stdlib.h>

int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);

int* ptr = (int *)calloc(n,sizeof(int));
int m = 5 ;
for(int i = 0 ;i<m ;i++){
    scanf("%d",&ptr[i]);
}
int a ;  int b ;
printf("Enter your index number where you want to insert a number ");
scanf("%d",&a);
printf("Enter the value which your want to insert ");
scanf("%d",&b);



for(int i = m ;i>a ;i--){
    ptr[i] = ptr[i-1] ;
}
ptr[a] = b ;
m++ ;
for (int i = 0 ;i<m ;i++){
    printf("%d   ",ptr[i]);
}
    return 0 ;
}