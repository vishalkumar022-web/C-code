#include<stdio.h>
int main(){

int arr[5]={1,2,3,4,5};
for(int i =0 ;i<5 ; i++){
    for(int j =i ; j<5 ;j++){
        for(int k = i ; k<=j ;k++){
            printf("%d  ",arr[k]);
        }
    printf("\n");
    }
}
return 0 ; }

// for find maximum Sum of subarrays :-->
// #include<stdio.h>
// int main(){
// int sum =0 ;   int max_sum = 0 ;
// int arr[5]={1,2,3,4,5};
// for(int i =0 ;i<5 ; i++){
//     for(int j =i ; j<5 ;j++){
//         sum = 0 ;
//         for(int k = i ; k<=j ;k++){
//            sum = sum + arr[k];}

//            if(sum>max_sum){
//             max_sum= sum ;
//            }
//     }
// }

// printf("max sum = %d ",max_sum);





//     return 0 ;
// }