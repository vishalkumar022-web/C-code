#include<stdio.h>
int main(){

char arr[100];
int count = 0 ;    int count1 = 0 ;
fgets(arr,sizeof(arr),stdin);


for(int i =0 ;arr[i]!='\0';i++){
    if(arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z'){
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
       count++ ;
    }
    else{
       count1++ ;
    } 
}
else{
printf("the given character is not a vowel or alphabets \n");
}
}
printf("Total number of vowel in the given string is %d\n",count);

printf("Total number of consonant in the given string is %d\n",count1);
    return 0 ;
}