#include<stdio.h>
#include<string.h>
int main(){

char arr[100];   char *ptr = arr ;        int flag = 0 ;
char brr[100];   char *ptr1 = brr ;

fgets(ptr,sizeof(arr),stdin);
fgets(ptr1,sizeof(brr),stdin);

arr[strcspn(arr,"\n")]= '\0' ;
brr[strcspn(brr,"\n")]= '\0' ;

if(strcmp(arr,brr)==0){
    flag = 1 ;
}

// int i =0 ;
// while(*(ptr+i)!='\0'){
//     if(*(ptr+i)==' '||*(ptr+i)=='\n'){
//         *(ptr+i)='\0';
//     }
//     i++ ;
// }

// i =0 ;
// while(*(ptr1+i)!='\0'){
//     if(*(ptr1+i)==' '||*(ptr1+i)=='\n'){
//         *(ptr1+i)='\0';
//     }
//     i++ ;
// }

// int flag = 1 ;
// for (int i =0,j=0 ;*(ptr+i)!='\0'&&*(ptr1+i)=='\0';i++,j++){
//         if(*(ptr+i)!=*(ptr1+i)){
//             flag = 0 ;
//             break;
//         }
// }
// if(*(ptr+i)!='\0'||*(ptr1+i)!='\0'){
//     flag = 0 ;
// }

if(flag==1){
    printf("Both string are same");
}
else{
     printf("Both string are not same");
}

    return 0 ;
}