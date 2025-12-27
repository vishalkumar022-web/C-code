#include<stdio.h>
#include<string.h>
int main(){

char arr[1000];         char word[50];     int count = 0 ;
printf("Enter your complete string :--> ");
fgets(arr,sizeof(arr),stdin);

printf("Enter your word which you want to search :--> ");
fgets(word,sizeof(word),stdin);

word[strcspn(word,"\n")]= '\0' ;

char temp[100];
int i = 0 ;
int x = 0 ;
while(arr[i]!='\0'){
   
    if(arr[i]!=' '&& arr[i]!='\n'){
        temp[x]= arr[i];
        x++ ;  
    }
    else{
    temp[x]='\0';

   if( strcmp(word,temp) == 0){
             count++ ;
   }
    x= 0 ;
   
}
  i++ ;
}
   if(x>0){
  if(strcmp(temp,word)==0){
    count++ ;
  }
}

printf("%s is repeated %d times in a string ",word,count);

return 0 ;
}
