#include<stdio.h>
int main(){
int flag = -1 ;    int count =1 ;  
int arr[6]={1,2,3,2,3,2};
for (int i =0 ;i<6 ; i++){
    for (int j =i+1 ;j<6 ;j++){
        if (arr[i]==arr[j] ){
                flag = arr[i];
                 count++;   
                }
            }   
            if(flag==arr[i]){
                break;
            }
   
}


printf("%d is repeated %d times ",flag,count);


    return 0 ;
}



// #include<stdio.h>
// int main(){
// int flag = -1 ;    int count =1 ;  int first = 1;
// int arr[5]={1,2,3,2,3};
// for (int i =0 ;i<5 ; i++){
//     for (int j =i+1 ;j<5 ;j++){
//         if (arr[i]==arr[j] && (flag == arr[i] || first == 1)){
//                 flag = arr[i];
//                  count++;
//                 first++;
                   
//                 }
//             }   
   
// }

// printf("%d is repeated %d times ",flag,count);


//     return 0 ;
// }



