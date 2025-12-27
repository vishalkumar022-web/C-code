#include<stdio.h>
int main(){

int arr[2][2];
for (int i = 0 ;i<2 ;i++){
    for(int j = 0 ; j<2 ;j++){
        scanf("%d",&arr[i][j]);
    }
}

int product = 1 ;
for(int i =0 ;i<2 ;i++){
    for (int j = 0 ; j<2 ;j++){
        product  = product * arr[i][j];
    }
    printf("\n");
}

printf("product = %d ",product );


    return 0 ;
}