#include<stdio.h>
int main(){

int arr[3][3];
for (int i = 0 ;i<3 ;i++){
    for(int j = 0 ; j<3 ;j++){
        scanf("%d",&arr[i][j]);
    }
}

int sum = 0 ;   int count = 0 ;
for(int i =0 ;i<3 ;i++){
    for (int j = 0 ; j<3 ;j++){
        sum = sum + arr[i][j];
        count++ ;
    }
    printf("\n");
}

printf("Average = %d ",sum/count );


    return 0 ;
}