#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char* arr = (char*)malloc(1000*sizeof(char));
fgets(arr,1000,stdin);

char* brr = (char*)malloc(1000*sizeof(char));
fgets(brr,1000,stdin);

for (int i = 0 ;arr[i]!='\0';i++){
    if(arr[i]=='\n'){
        arr[i]='\0' ;
    }
}

for (int i = 0 ;brr[i]!='\0';i++){
    if(brr[i]=='\n'){
        brr[i]='\0' ;
    }
}

for (int i =0 ; arr[i]!='\0' ;i++){
    arr[i] = '\0' ;
}

int x = 0 ;
for(int i = 0 ;brr[i]!='\0';i++){
    arr[x] = brr[i] ;
    x++ ;
}
printf("%s\n",arr);
printf("%s",brr);

    return 0 ;
}