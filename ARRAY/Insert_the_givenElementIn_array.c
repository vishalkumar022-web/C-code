#include<stdio.h>
int main(){

int arr[10]={1,2,3,4,5};
int n = 5 ;

int y ;
printf("Enter your value where you want to insert element :- ");
scanf("%d",&y);

int x ;
printf("Enter your element which you want to insert :- ");
scanf("%d",&x);

for (int i =n ; i>y ;i--){
    arr[i]=arr[i-1];
}
arr[y]=x ;
n++ ;
for (int i = 0 ;i<n ;i++){
    printf("%d  ",arr[i]);
}
    return 0 ;
}