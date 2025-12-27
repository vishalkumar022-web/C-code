#include<stdio.h>
int main(){

char arr[100];  int count = 1 ;  int flag = -1 ;

fgets(arr,sizeof(arr),stdin);

for (int i =0 ; arr[i]!='\0';i++){
    for(int j=i+1 ; arr[j]!='\0';j++){
        if(arr[i]==arr[j]){
            count++ ;
            flag = arr[i] ;
            break ;
        }
    }
    if(flag==arr[i]){
        break;
    }
}
printf("%c is repeated %d times in a string ",flag,count);



    return 0 ;
}