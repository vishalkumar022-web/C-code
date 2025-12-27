#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int rows = 2 , cols = 3  ;

   int **arr= (int **)malloc(rows * sizeof(int *));
   
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));   
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int new_col ;
    printf("Resize the matrix to how many columns ? ");
    scanf("%d", &new_col);

    arr = (int **)realloc(arr, new_col * sizeof(int *));
    
    for (int i = cols; i < new_col; i++) {
        arr[i] = (int *)malloc(rows * sizeof(int));
    }

    printf("Enter your values ");
    for (int i =0 ;i<rows;i++){
        for (int j =cols ;j<new_col ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Updated Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < new_col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
