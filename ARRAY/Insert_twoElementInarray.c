#include<stdio.h>
int main(){

int arr[10]={1,2,5,6,7};
int n = 5 ;

int y , a ;
printf("Enter your value where you want to insert element :- ");
scanf("%d%d",&y,&a);

int x ,b ;
printf("Enter your element which you want to insert :- ");
scanf("%d%d",&x,&b);

for (int i =n ; i>y ;i--){
    arr[i]=arr[i-1];
}
arr[y]=x ;
n++ ;

for (int i =n ; i>a ;i--){
    arr[i]=arr[i-1];
}
arr[a]=b ;
n++ ;
for (int i=0; i<n ;i++){
    printf("%d  ",arr[i]);
}
    return 0 ;
}