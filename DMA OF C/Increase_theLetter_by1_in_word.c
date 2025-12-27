#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int n ;
printf("Enter your number ");
scanf("%d",&n);



char* arr = (char *)malloc(n*sizeof(char));
getchar();
fgets(arr,n,stdin);
for(int i =0 ; arr[i]!='\0';i++){
    if(arr[i]=='\n'||arr[i]==' '){
        arr[i]= '\0' ;
    }
}

for (int i = 0 ;arr[i]!='\0';i++){
    arr[i] = arr[i] + 1 ;
}

for (int i = 0 ;arr[i]!='\0';i++){
   printf("%c",arr[i]);
}
    return 0 ;
}