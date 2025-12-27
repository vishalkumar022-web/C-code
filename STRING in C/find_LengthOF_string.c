#include<stdio.h>
int main(){

char arr[1000];

int i = 0 ;    int count = 0 ;
while(i<1000){
    scanf("%c",&arr[i]);
    if(arr[i]=='#'){
        break;
    }
    i++ ;
}
arr[i]= '\0';
i= 0 ;
while(arr[i]!='\0'){
    count++ ;
  i++ ;
}
printf("size of a given string is %d",count);

return 0 ;
}