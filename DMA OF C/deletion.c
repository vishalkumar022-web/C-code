//     //           Delete two element From a Array :--->   

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
// int n ;
// printf("Enter your number ");
// scanf("%d",&n);
// int *arr = (int*) malloc (n*sizeof(int));

// for(int i = 0 ;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// int x  ;   int y ;
// printf("Enter your numbers which you want to delete ");
// scanf("%d%d",&x,&y);   int flag = 0 ;   int c = 0 ; 

// for (int i = 0;i<n;i++){
//    if(*(arr+i)==x || arr[i]==y){
//             c = y ;
//         flag = x ;
//    }
// }
// if(flag!=0 && c!=0){

//   for (int i = 0 ;i<n;i++){
//     if(arr[i]==flag&&arr[i]==c){
//         continue;
//     }
//     printf("%d  ",arr[i]);
//   }
// }


//     return 0 ;
// }

#include<stdio.h>
#include<stdlib.h>

int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);
int *arr = (int*) malloc (n*sizeof(int));

for(int i = 0 ;i<n;i++){
    scanf("%d",&arr[i]);
}
int x  ;
printf("Enter your number which you want to delete ");
scanf("%d",&x);   int flag = 0 ;

for (int i = 0;i<n;i++){
   if(*(arr+i)==x){
        flag = i ;
   }
}
if(flag!=0){

  for (int i = flag ;i<n;i++){
    arr[i] = arr[i+1] ;
  }
  n-- ;
  for(int i = 0 ;i<n ;i++){
    printf("%d  ",arr[i]);
  }
}
else{
    printf("%d is not present in a array",x);
}
    return 0 ;
}