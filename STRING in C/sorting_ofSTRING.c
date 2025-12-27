// #include<stdio.h>
// int main(){

// char arr[5]={'h','e','l','l','o'};

// for(int i = 0 ; i<5 ;i++){
//     for (int j = i+1 ;j<5 ;j++){
//         if(arr[i]>arr[j]){
//             int temp = arr[i];
//             arr[i]= arr[j] ;
//             arr[j] = temp ;
//         }
//     }
// }

// for (int i = 0 ;i<5 ;i++){
//     printf("%c",arr[i]);
// }
//     return 0 ;
// }


// BY Taking User inputs :-->

#include<stdio.h>
int main(){

char arr[1000];

int i = 0 ; 
printf("Enter your inputs :--> ");
while(i<1000){
    scanf("%c",&arr[i]);
    if(arr[i]=='#'){
        break;
    }
    i++ ;
}
arr[i]='\0';

for(int i = 0 ; arr[i]!='\0' ;i++){
    for (int j = i+1 ;arr[j]!='\0' ;j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]= arr[j] ;
            arr[j] = temp ;
        }
    }
}

for (int i = 0 ;arr[i]!='\0';i++){
    printf("%c",arr[i]);
}
    return 0 ;
}