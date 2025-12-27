#include<stdio.h>
#include<stdlib.h>

int main(){

int row ,column ;
printf("Enter your Row number ");
scanf("%d",&row);

printf("Enter your column number ");
scanf("%d",&column);

int**arr = (int**)malloc(row*sizeof(int*));

for (int i = 0 ;i<row ;i++){
    arr[i] = (int*)malloc(column*sizeof(int));
}

for(int i = 0 ; i<row;i++){
    for (int j = 0 ;j<column;j++){
    scanf("%d",&arr[i][j]);
  }
}


for (int i = 0 ,m = row-1 ;i<=m;i++,m--){
    for (int j = 0 ;j<column ;j++){
        int temp = arr[i][j];
        arr[i][j] = arr[m][j];
        arr[m][j]= temp ;
        
    }
}

for(int i = 0 ; i<row;i++){
    for (int j = 0 ;j<column;j++){
    printf("%d   ",arr[i][j]);
  }
  printf("\n");
}

return 0 ;
}