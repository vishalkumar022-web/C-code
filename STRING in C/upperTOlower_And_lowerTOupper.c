#include<stdio.h>
int main(){

char arr[1000];
int i =0 ;
while(i<1000){
    scanf("%c",&arr[i]);
    if(arr[i]=='#'){
        break;
    }
    i++ ;
}
arr[i]='\0' ;

i=0 ;
while(arr[i]!='\0'){
    if(arr[i]>=65&&arr[i]<=90){
    arr[i]= arr[i]+32 ;}
    else if(arr[i]>=97&&arr[i]<=122){
        arr[i] = arr[i]-32 ;
    }
     i++ ;
    }

arr[i]='\0' ;
   for(int i =0 ;arr[i]!='\0';i++){
    printf("%c",arr[i]);
   } 
    return 0 ;
}