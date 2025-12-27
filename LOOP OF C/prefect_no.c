#include<stdio.h>
int main(){
int sum = 0 ;
int n ;
printf("enter your number ");
scanf("%d",&n);

for (int i =1 ;i<=n-1 ;i++ ){
if (n%i==0){
    sum +=i ;
}
}
if (sum==n){
    printf("%d is a prefect no. ",n);
}
else { printf("%d is a not prefect no. ",n);}

    return 0 ;
}