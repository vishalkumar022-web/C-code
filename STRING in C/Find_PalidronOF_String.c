
#include<stdio.h>
#include<string.h>
int main(){

char arr[1000];    int count = 0 ;
fgets(arr,sizeof(arr),stdin);
arr[strcspn(arr,"\n")]='\0' ;

int i = 0 ;

while(arr[i]!='\0'){
    count++ ;
    i++ ;
}
char brr[count];

for(int i = 0 ; i<count ;i++){  // Here a new string is created of same size of arr 
    brr[i] = arr[i] ;           // where we stored a orignal string of arr[i] competely 
                               // then reverse the orignal string of arr[i]; then compare arr[i] to brr[i] ;
}

for (int i = 0 ,j= count-1 ; i<=j ; i++,j--){
    char temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp ;
}


int flag = -1 ;
for(int i = 0 ; i<count ; i++){
    if(arr[i]!=brr[i]){
        flag = 1 ;
        break;
    }
}
if(flag==1){
    printf("The given string is not a palidron ");
}
else{
    printf("The given string is a palidron ");
}
    return 0 ;
}