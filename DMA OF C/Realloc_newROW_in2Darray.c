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

    int new_rows ;
    printf("Resize the matrix to how many rows ? ");
    scanf("%d", &new_rows);

    arr = (int **)realloc(arr, new_rows * sizeof(int *));
    
    for (int i = rows; i < new_rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter your values ");
    for (int i =rows ;i<new_rows;i++){
        for (int j =0 ;j<cols ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Updated Matrix:\n"); 
    for (int i = 0; i < new_rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
