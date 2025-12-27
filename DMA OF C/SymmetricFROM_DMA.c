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


int**brr = (int**)malloc(row*sizeof(int*));

for (int i = 0 ;i<row ;i++){
    brr[i] = (int*)malloc(column*sizeof(int));
}


for(int i = 0 ; i<row;i++){
    for (int j = 0 ;j<column;j++){
     brr[i][j]  = arr[j][i];
  }
}
int flag = 1 ;
for(int i = 0 ;i<row ;i++){
    for(int j= 0 ;j<column;j++){
        if(arr[i][j]!=brr[i][j]){
            flag = 0 ;
        }
    }
}
if(flag ==1){
    printf("The given array is symmetric ");
}
else{
       printf("The given array is not a symmetric ");
}
    return 0 ;
}