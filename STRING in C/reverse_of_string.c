#include<string.h>
#include<stdio.h>
int main(){

char arr[1000];   fgets(arr,sizeof(arr),stdin);
arr[strcspn(arr,"\n")]= '\0' ; int count = 0 ;
int i =0 ;
for (i = 0 ; arr[i]!='\0' ; i++){
    count++ ;
}

printf("Your size of a given string is :-> %d\n",count);

for (int i = 0 ,j= count-1 ; i<=j ; i++,j--){
    char temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp ;
}
printf("Reversed String is = ");
for(int i = 0 ; i<count ;i++){
    printf("%c ,",arr[i]);
}

    return 0 ;
}