// #include<stdio.h>
// int main(){

// int arr[3][2]= {{1,5},{4,6},{3,8}};
// int temp [6] ;
// int x = 0 ;
// for(int i = 0 ; i<3 ; i++){
//     for (int j = 0 ;j<2 ;j++){
//         temp[x] = arr[i][j];
//         x++ ;
//     }
// }

// for(int x = 0 ; x<6 ;x++){
//     for(int j = x+1 ; j<6 ; j++){
//         if (temp[x]>temp[j]){
//             int t = temp[x];
//             temp[x]= temp[j];
//             temp[j]= t ;
//         }
//     }
// }
// x = 0 ;
// for (int i = 0 ;i<3;i++){
//     for(int j = 0 ; j<2 ;j++){
//         arr[i][j]=temp[x];
//         x++ ;
//     }
// }


// for (int i =0 ;i<3 ;i++){
//     for (int j=0 ;j<2 ;j++){
//         printf("%d  ",arr[i][j]);
//     }
//     printf("\n");
// }

// int max = 0 ;
// int k ; 
// printf("Enter your kth number  ");
// scanf("%d",&k);
// max = temp[6-k];
// printf("Max number in 2D array = %d ",max);
//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// int arr[2][3]={{1,4,6},{0,2,5}};

// for (int i =0 ;i<2 ; i++){
//     for (int j = 0 ; j<3 ;j++){
// printf("%d  ",arr[i][j]);}
// printf("\n");
// }

// // for Assending order 
// for (int i =0 ; i<2 ; i++){
//     for (int j = 0 ;j<3 ;j++){
//         for (int m = 0 ; m<2 ; m++){
//             for(int n =0 ; n<3 ;n++){
//                 if (arr[i][j]>arr[m][n]){
//                     int temp = arr[i][j];
//                     arr[i][j] = arr[m][n];
//                     arr[m][n]= temp ;
//                 }
//             }
//         }
//     }
// }

// printf("\n\n");
// for (int i =0 ;i<2 ; i++){
//     for (int j = 0 ;j<3 ;j++){
//         printf("%d  ",arr[i][j]);
//     }
//     printf("\n");
// }

//     return 0 ;
// }


// #include<stdio.h>
// int main(){

// int arr[2][3]={{1,4,3},{0,34,5}};
// int k ; 
// printf("Enter your kth element which you want to search : ");        
// scanf("%d",&k);
// int flag = -1 ;  int flag1 = 0  ;

// for(int i = 0 ; i<2 ; i++){
//     for(int j = 0 ; j<3 ;j++){
//         if (arr[i][j]==k){                 // search kth element in 2D ...
//        flag = i ;
//               flag1 = j ;
//         }
//     }
// }
// if (flag ==-1|| flag1 ==0){
// printf("%d is not present in array ",k);
// }
// else {
//     printf("%d is present in %d,%d indices ",k,flag ,flag1);
// }
//    return 0 ;
// }







// #include<stdio.h>
// int main(){

// int arr[3][2]= {{1,5},{4,6},{3,8}};
// int temp [6] ;
// int x = 0 ;                                // kth max with indices ..
// for(int i = 0 ; i<3 ; i++){
//     for (int j = 0 ;j<2 ;j++){
//         temp[x] = arr[i][j];
//         x++ ;
//     }
// }

// for(int x = 0 ; x<6 ;x++){
//     for(int j = x+1 ; j<6 ; j++){
//         if (temp[x]>temp[j]){
//             int t = temp[x];
//             temp[x]= temp[j];
//             temp[j]= t ;
//         }
//     }
// }
// x = 0 ;
// for (int i = 0 ;i<3;i++){
//     for(int j = 0 ; j<2 ;j++){
//         arr[i][j]=temp[x];
//         x++ ;
//     }
// }
// int max = 0 ;   int flag = -1 ;    int flag1 = -2 ;
// int k ; 
// printf("Enter your kth number  ");
// scanf("%d",&k);

// for (int i =0 ;i<3 ;i++){
//     for (int j= 0 ;j<2 ;j++){

// if(arr[i][j] == temp[6-k]){
//   max = temp[6-k];
// flag = i ;   flag1 = j ;
// }
// }
// }
// printf("%d is maximum in array with %d,%d indices ",max,flag,flag1);


// return 0 ;
// }




// #include<stdio.h>
// int main(){

// int n ;
// printf("Enter your Row number and column number  ");
// scanf("%d%d",&n,&n);

// int arr[n][n];
// printf("Enter your inputs ");
// for(int i = 0 ;i<n ;i++){
//     for(int j=0 ;j<n ;j++){
//         scanf("%d",&arr[i][j]);
//     }
// }

// for (int i = 0 ;i<n ;i++){
//     for(int j=0 ; j<n ;j++){
//         printf("%d   ",arr[j][i]);
//     }
//     printf("\n");
// }


//     return 0 ;
// }



// #include<stdio.h>
// int main(){
// int flag = -1 ;   int a = -1 ; int b = -1 ;  int count = 1;
// int arr[2][3]={{1,4,6},{4,2,1}};
// int c = 2*3 ;
// int temp[c];

// int x = 0 ;     

// for(int i = 0 ;i<2 ; i++){
//     for(int j =0 ;j<3 ;j++){
//         temp[x]=arr[i][j];
//         x++ ;
//     }
// }

// for(int x =0 ; x<c ;x++){
//     for (int j = x+1 ; j<c ;j++){
//         if(temp[x]==temp[j]){
//                 flag = temp[x];
//                 count++ ; 
               
//         }
//     }
//     if(flag == temp[x]){
//         break;
//     }
// }

//     // printf("%d is first repeating element in the array ",flag);

//     for(int i = 0 ;i<2 ; i++){
//     for(int j =0 ;j<3 ;j++){
//         if (arr[i][j]==flag){
//                 a = i ;  b = j ;
//         }
//     }
// }
//   printf("%d is first repeating element %d times with indices %d,%din the array ",flag,count,a,b);

//     return 0 ;
// }




// #include<stdio.h>
// int main(){

// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; int sum = 0 ;  int sum1 =0 ;

// for (int i=0 ;i<3;i++){
//     sum = 0 ;
//      sum1 =0 ;
//     for(int j = 0 ; j<3 ; j++){
//         sum= sum + arr[i][j];
//         sum1 = sum1 + arr[j][i];
       
// }
// printf(" sum of all element of column %d = %d",i+1,sum1);  
//  printf("\n sum of all element of row %d = %d",i+1,sum);
//     }
    
//     return 0 ;
// }

// #include<stdio.h>
// int main(){
  
// int arr[2][3]={{1,3,5},{2,4,6}};
// int brr[2][3]={{1,3,5},{2,9,6}};
// int flag = 1 ;

// for (int i =0 ;i<2 ;i++){
//     for (int j = 0 ; j<3 ;j++){
//         if(arr[i][j]!=brr[i][j]){
//                 flag =0 ;
//                 break;
//         }
//     }
//     if(flag==0){
//         break;
//     }
// }
// if (flag==1){
//     printf("Both matrix are equal ");
// }
// else{
//     printf("Both matrix are not equal ");
// }
//     return 0 ;
// }









// *** 2D Array through Function :--->

// #include<stdio.h>
// void input(int row,int column,int arr[row][column]){
//     printf("Enter your inputs :--");
//     for (int i =0 ; i<row ;i++){
//         for (int j =0 ;j<column ;j++){
//                 scanf("%d",&arr[i][j]);
//         }
//     }
// }
// void output(int row , int column , int arr[row][column]){
//     for (int i =0 ; i<row ;i++){
//         for (int j =0 ;j<column ;j++){
//                 printf("%d   ",arr[i][j]);
//         }
//         printf("\n");
//     }
    
// }

// int main(){

// int arr[2][2];

// input(2,2,arr);

// output(2,2,arr);

//     return 0 ;
// }




// #include<stdio.h>
// int main(){

// int arr[2][3]={{1,4,3},{2,34,5}};

// int flag = -1 ;  int flag1 = 0  ;   int max  = arr[0][0];  int min = arr[0][0];
// int i , j ;
// for( i = 0 ; i<2 ; i++){
//     for( j = 0 ; j<3 ;j++){
//         if (arr[i][j]>max){             // 1st max with indices .........
//                 max = arr[i][j];
//             flag = i ;
//               flag1 = j ;
//         }
//         else if(arr[i][j]<min){
//             min = arr[i][j];
//         }
//     }
// }
//     printf("%d is a min element in 2D array ",min);
//     printf("%d is a max element in 2D array with %d,%d indices ",max,flag,flag1);

//    return 0 ;
// }


// #include<stdio.h>
// int main(){
// int count = 0 ;
// int arr[2][3]={{1,3,2},{4,3,7}};
// int k ;  int flag = 0  ;
// printf("Enter your number ");
// scanf("%d",&k);

// for (int i=0 ;i<2 ;i++){
//     for (int j=0;j<3;j++){
//         if(arr[i][j]==k){
//             count++ ;
//             flag =1 ;
//         }
//     }
// }
// if (flag==1){
// printf("%d is present in a array %d times ",k,count);
// }
// else{
//     printf("%d is not present in Array ",k);
// }
//     return 0 ;
// }





//Multiplication of two Matrices :-->

#include<stdio.h>
int main(){

int arr[2][3]={{1,2,3},{4,5,6}};
int brr[3][2]={{1,2},{3,4},{5,6}};

int resultant[2][2];    int t = 3 ;

for(int i = 0 ;i<2;i++){
    for(int j=0 ;j<2;j++){
           resultant[i][j]=0;
            for(int k=0 ;k<t;k++){
                resultant[i][j]+= arr[i][k]*brr[k][j];
            }
    }
}

for(int i = 0 ;i<2;i++){
    for(int j=0 ;j<2;j++){
        printf("%d  ",resultant[i][j]);
    }
    printf("\n");
}
    return 0 ;
}


