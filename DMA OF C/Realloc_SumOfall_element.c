#include<stdio.h>
#include<stdlib.h>

int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);
int *arr = (int*) malloc (n*sizeof(int));

for(int i = 0 ;i<n;i++){
    scanf("%d",&arr[i]);
}
int sum = 0 ;

for (int i = 0;i<n;i++){
    sum = sum + *(arr+i);
}
printf(" sum = %d\n",sum);
int m ; 
printf("Enter your number");
scanf("%d",&m);
arr = (int *)realloc(arr,m*sizeof(int));  // yaha se ham size ko badha ghata
for(int i = n ; i<m ;i++){                // dono sakte hai.
    scanf("%d",&arr[i]);
}

for (int i = n ; i<m ;i++){
    sum= sum + arr[i] ;
}
printf(" New sum = %d",sum);

    return 0 ;
}