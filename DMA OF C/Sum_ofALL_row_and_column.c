#include<stdio.h>
#include<stdlib.h>

int main(){

int n ;
printf("Enter your row number ");
scanf("%d",&n);
int m ;
printf("Enter your column number ");
scanf("%d",&m);

int**arr = (int**)malloc(n*sizeof(int*));

for(int i = 0 ;i<n ;i++){
    arr[i]= (int*)malloc(m*sizeof(int));
}
for (int i = 0 ;i<n;i++){
    for (int j = 0 ;j<m ;j++){
        scanf("%d",&arr[i][j]);
    }
}
int sum = 0 ;   int sum1 = 0 ; 
for(int i = 0 ;i<n ;i++){
    sum = 0 ;  sum1 = 0 ;
    for (int j = 0 ;j<m ; j++){
        sum = sum+arr[i][j];
        sum1 = sum1+arr[j][i] ;
    }
    printf("sum of %d rows = %d\n ",i+1,sum);

    printf("sum of %d columns = %d\n ",i+1,sum1);
}



    return 0 ;
}