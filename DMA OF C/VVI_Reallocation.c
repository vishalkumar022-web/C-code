#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

int n ;

printf("Enter your number ");
scanf("%d",&n);

float*arr = (float *)calloc(n,sizeof(float));

printf("Enter your elements in Array ");
for(int i =0 ;i<n ;i++){
    scanf("%f",&arr[i]);
}

for(int i =0 ;i<n ;i++){
    printf("%f     ",arr[i]);
}

printf("\n\n\n");
int m = n*2 ;
arr = (float*)realloc(arr,m*sizeof(float));

for (int j = n ;j<m ;j++){
     arr[j] = sqrt(arr[j-n]);
}

for (int i = 0 ;i<m ;i++){
   printf("%f   ",arr[i]);
}

    return 0 ;
}
