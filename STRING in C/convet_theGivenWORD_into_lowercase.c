#include<stdio.h>
#include<string.h>
int main(){

char arr[1000];
fgets(arr,sizeof(arr),stdin);
arr[strcspn(arr,"\n")]='\0' ;

int i=0 ;
while(arr[i]!='\0'){
    if(arr[i]>='A'&&arr[i]<='Z'){
    arr[i]= arr[i]+32 ;}
     i++ ;
    }

arr[i]='\0' ;

   for(int i =0 ;arr[i]!='\0';i++){
    printf("%c",arr[i]);
   }





    return 0 ;
}