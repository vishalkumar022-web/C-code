#include<stdio.h>
int main(){

char arr[100];
int count = 0 ;    int count1 = 0 ;   int count2 = 0 ;
fgets(arr,sizeof(arr),stdin);


for(int i =0 ;arr[i]!='\0';i++){
    if(arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z'){
    count++ ;
    }
    else if(arr[i]>='0'&&arr[i]<='9'){
       count1++ ;
    } 
    else{
         count2++ ;
    }
}

printf("Total number of Alphabets in the given string is %d\n",count);

printf("Total number of Digits in the given string is %d\n",count1);

printf("Total number of special character in the given string is %d\n",count2);
    return 0 ;
}