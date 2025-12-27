#include<stdio.h>
#include<stdlib.h>
int main(){

int n ;
printf("Enter your number ");
scanf("%d",&n);

int *arr = (int*)malloc(n*sizeof(int));
printf("Enter your elements ");
for(int i =0 ;i<n ;i++){
    scanf("%d",&arr[i]);
}


for(int i =0 ;i<n ;i++){
    printf("%d    ",arr[i]);
}
printf("\n\n\n");

int m ;
printf("Enter your number ");
scanf("%d",&m);
arr =(int*)realloc(arr,m*sizeof(int));

for (int i = n ;i<m ;i++){
    scanf("%d",&arr[i]);
}
for (int i = 0 ;i<m ;i++){
    printf("%d  ",arr[i]);
}

    return 0 ;
}