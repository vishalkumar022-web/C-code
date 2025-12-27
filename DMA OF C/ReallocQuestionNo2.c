#include<stdio.h>
#include<stdlib.h>
int main(){
    
int n ;
printf("Enter your number ");
scanf("%d",&n);


int*arr = (int *)malloc(n*sizeof(int));

printf("Enter your elements in Array ");
for(int i =0 ;i<n ;i++){
    scanf("%d",&arr[i]);
}

for(int i =0 ;i<n ;i++){
    printf("%d     ",arr[i]);
}

printf("\n\n\n");
int m = n+4 ;

arr = (int*)realloc(arr,m*sizeof(int));

for (int i = n ;i<m ;i++){
    arr[i] =0 ;
}

for (int i = 0 ;i<m ;i++){
   printf("%d   ",arr[i]);
}
free(arr);

    return 0 ;
}