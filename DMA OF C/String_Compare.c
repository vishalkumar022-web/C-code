#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char* arr = (char*)malloc(1000*sizeof(char));
fgets(arr,1000,stdin);

char* brr = (char*)malloc(1000*sizeof(char));
fgets(brr,1000,stdin);
brr[strcspn(brr,"\n")]='\0';

// for (int i = 0 ;arr[i]!='\0';i++){
//     if(arr[i]=='\n'){
//         arr[i]='\0' ;
//     }
// }

// for (int i = 0 ;brr[i]!='\0';i++){
//     if(brr[i]=='\n'){
//         brr[i]='\0' ;
//     }
// }
// int flag = 1 ; int i ;
// for ( i = 0 ;arr[i]!='\0'&&brr[i]!='\0';i++){
//     if(arr[i]!=brr[i]){
//         flag = 0 ;
//         break;
//     }
// }

//     if(arr[i]!='\0'||brr[i]!='\0'){
//         flag  = 0 ;
//     }
 int flag = 1 ;
if(strcmp(arr,brr)==0){
    flag = 0 ;
}
if (flag==0){
    printf("Both string are same ");
}
else{
    printf("Both string are not same ");
}

return 0 ;
}