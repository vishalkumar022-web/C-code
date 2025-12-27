#include<stdio.h>
int main(){

int size ;
printf("Enter your size : ");
scanf("%d",&size);

int arr[size];

for(int i = 0 ; i<size ; i++){
printf("Enter your %d number ",i+1);
scanf("%d",&arr[i]);
}
int sum = 0 ; int sum1 = 0 ;  int c = 0 ;   int c1 = 0 ;
for (int i = 0 ; i<size ; i++){
    if (i%2==0){
    sum = sum + arr[i];
c++ ;

}  
else {
    sum1 = sum1 + arr[i];
    c1++ ;
}
    
}
printf("average of all even number = %d\n ",sum/c);
    printf("average of all odd number = %d ",sum1/c1);
    return 0 ;
}