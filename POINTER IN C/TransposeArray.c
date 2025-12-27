#include<stdio.h>
int main(){

int arr[3][2]={{1,2},{3,4},{5,6}};
int* ptr = &arr[0][0];
printf("Normal matrix = ");
printf("\n");
for(int i = 0 ;i<3 ;i++){
    for (int j = 0 ; j<2 ;j++){
        printf("%d  ",*(ptr+i*2+j));
    }
    printf("\n");
}
printf("\n\n\n");
printf("Transpose of a Array is = ");
printf("\n");
for(int i = 0 ;i<2 ;i++){// vvi transpose krte samay row number ko col. number 
                        //and column number ko row me change kr dete hai.
    for (int j = 0 ; j<3 ;j++){
        printf("%d  ",*(ptr+j*2+i));
    }
    printf("\n");
}

    return 0 ;
}