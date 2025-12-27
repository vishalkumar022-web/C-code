#include<stdio.h>
int main(){

int row ;
printf("Enter your row: ");
scanf("%d",&row);
int column ;
printf("Enter your column: ");
scanf("%d",&column);

int arr[row][column];

for (int i =0 ; i<row ; i++){
    for (int j=0 ; j<column ; j++){
        scanf("%d",&arr[i][j]);
    }
}

for (int i =0 ; i<row ; i++){
    for (int j=0 ; j<column ;j++){
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
}
    return 0 ;
}