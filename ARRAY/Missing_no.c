#include<stdio.h>
int main(){

int arr[7]= {1,2,3,4,6,7,8};
int sum = 0 ;
for(int i =0 ;i<7; i++){
    sum = sum + arr[i]; 
}


int sum1 = 8*(8+1)/2;
printf("Total sum = %d ",sum1);

printf("Missing number = %d",sum1-sum);

return 0 ;    
}