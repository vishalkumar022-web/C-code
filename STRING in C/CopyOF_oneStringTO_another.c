#include<stdio.h>
int main(){

char arr[1000];
char brr[100];
printf("Enter the input in 1st string :-");
fgets(arr,sizeof(arr),stdin);
printf("Enter the input in 2nd string :-");
fgets(brr,sizeof(brr),stdin);

for (int i =0 ;arr[i]!='\0';i++){
    arr[i]='\0' ;
} 
int x = 0 ;
for (int i =0 ; brr[i]!='\0';i++){
    arr[x]=brr[i] ;
        x++ ;
}
arr[x]='\0' ;

printf("%s\n",arr);
printf("\n%s",brr);
    return 0 ;
}


// Using Inbuild function :--->   

#include<stdio.h>
#include<string.h>
int main(){

char arr[1000];
char brr[100];
printf("Enter the input in 1st string :-");
fgets(arr,sizeof(arr),stdin);
printf("Enter the input in 2nd string :-");
fgets(brr,sizeof(brr),stdin);

strcpy(arr,brr);

printf("%s\n",arr);
printf("\n%s",brr);
    return 0 ;
}