#include<stdio.h>
#include<string.h>
int main(){

char arr[1000];
char brr[100];

printf("Enter the input in 1st string :- ");
fgets(arr,sizeof(arr),stdin);
printf("Enter the input in 2nd string :- ");
fgets(brr,sizeof(brr),stdin);

arr[strcspn(arr,"\n")]='\0' ;

// int i =0  ;  int count =0 ;


// i=0 ;
// while(arr[i]!='\0'){
//     count++ ;
//     i++ ;
// }

//    i = 0 ;
// while(brr[i]!='\0'){
//     arr[count]=brr[i];
//     count++ ;
//     i++ ;
// }
// arr[count]= '\0' ;
strcat(arr,brr);

for (int i = 0 ;arr[i]!='\0';i++){
    printf("%c",arr[i]);
}
    return 0 ;
}