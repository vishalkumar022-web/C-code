#include<stdio.h>
#include<string.h>

int main(){

char arr[1000];
fgets(arr,sizeof(arr),stdin);
arr[strcspn(arr,"\n")]='\0' ;

for (int i = 0 ; arr[i]!='\0' ; i++){
    if (arr[i]==' '){
        arr[i] = '\n' ;
    }
    printf("%c ",arr[i]); 
}
    return 0 ;
}