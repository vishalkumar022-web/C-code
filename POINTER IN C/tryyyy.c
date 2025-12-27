// #include<stdio.h>

// void void_sum(int*ptr,int row,int column,int*ptr1){
//     for(int i =0 ;i<row;i++){  
//         for (int j =0 ;j<column;j++){
//             scanf("%d",&*(ptr+i*column+j));
//         }
//     }

//     for (int i =0 ;i<row ;i++){
//         for (int j =0 ; j<column;j++){
//             *ptr1 = *ptr1 + *(ptr+i*column+j) ;
//         }
//     }
// }

// int main(){

// int arr[3][3];

// int sum = 0 ;
// void_sum(&arr[0][0],3,3,&sum);

// printf("Sum of all Element is = %d",sum);


//     return 0 ;
// }



 #include <stdio.h>
 int main() {
 int x = 10;
 int *p = &x;      // pointer to x
 int **pp = &p;    // pointer to pointer
 printf("x = %d\n", &x);       // 10
 printf("*p = %d\n", p);     // 10
 printf("**pp = %d\n",pp); // 10
 return 0;
 }