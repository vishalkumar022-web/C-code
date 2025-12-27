#include<stdio.h>
#include<stdlib.h>

int main(){


int r1 = 2 , c1 = 3 ;
int r2 = 3 , c2 = 2 ;

int**arr = (int **)malloc(r1*sizeof(int*));
for (int i = 0 ;i<r1;i++){
    arr[i]= (int*)malloc(c1*sizeof(int));
}

printf("Enter the element in 1st array ");

for (int i =0 ;i<r1;i++){
    for (int j = 0 ;j<c1 ;j++){
        scanf("%d",&arr[i][j]);
    }
}

int**brr = (int **)malloc(r2*sizeof(int*));
for (int i = 0 ;i<r2;i++){
    brr[i]= (int*)malloc(c2*sizeof(int));
}
printf("Enter the element in 2nd array ");
for(int i =0 ;i<r2;i++){
    for (int j = 0 ;j<c2 ;j++){
        scanf("%d",&brr[i][j]);
    }
}

int** resultant = (int**)malloc(r1*sizeof(int*));
for (int i = 0 ;i<r1;i++){
    resultant[i] = (int *)malloc(c2*sizeof(int));
}
int t = c1 ;
for (int i = 0 ;i<r1;i++){
    for (int j = 0 ;j<c2;j++){
        resultant[i][j] = 0 ;
        for (int k = 0 ;k<c1;k++){
            resultant[i][j]+= arr[i][k] * brr[k][j];
        }
    }
    
}
for (int i = 0 ;i<r1;i++){
    for (int j = 0 ;j<c2;j++){
        printf("%d    ",resultant[i][j]);
    }

    printf("\n");

}

    return 0 ;
}