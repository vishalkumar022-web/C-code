#include<stdio.h>
int main(){
int i ;
char arr[1000];
for( i = 0 ;i<1000 ;i++){
   scanf("%c",&arr[i]);
    if(arr[i]=='#'){
        break;
    }
    
}
arr[i]= '\0' ;

for (int i =0 ;arr[i]!='\0' ; i++){
    printf("%c",arr[i]);
}

    return 0 ;
}