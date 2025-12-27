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
int m = row*column ;
int temp[m];  int x = 0 ;
for (int i = 0 ;i<row;i++){
    for (int j = 0 ;j<column;j++){
        temp[x] = arr[i][j] ;
        x++ ;
    }
}

for (int i = 0 ,j=m-1;i<=j;i++,j--){
    int t = temp[i] ;
    temp[i] = temp[j];
    temp[j] = t ;
}

int c = 0 ;

for(int i = 0 ; i<row;i++){
    for (int j = 0 ;j<column;j++){
    arr[i][j] = temp[c];
        c++ ;
  }
}

for(int i = 0 ; i<row;i++){
    for (int j = 0 ;j<column;j++){
    printf("%d  ",arr[i][j]);
  }
  printf("\n");
}

return 0 ;
}