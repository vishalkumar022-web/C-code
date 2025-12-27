#include<stdio.h>
#include<string.h>

int main(){

FILE* fp ;
fp = fopen("lineRead.txt","r");

char word[100];
printf("Enter your word which you want to search ");
scanf("%s",word);

rewind(fp);
int x = 0 ;
char temp[100];    char ch ;   int line = 1 ;  int flag = 0 ;

while((ch=fgetc(fp))!=EOF){
   
    if(ch!='\n'){
        temp[x]= ch ;
        x++ ;
        
    }
    else{temp[x]= '\0' ;
    if(strcmp(temp,word)==0){
      
       flag = 1 ;
       break; 
    }
    x = 0 ;
      line++ ;
    }
}
// For last line :-->  

if(x>0){
    if(strcmp(temp,word)==0){
        flag = 1 ;
    }
}
if(flag==1){
    printf("the given word is found in %d line ",line);
}
else{
    printf("the given word is not found in a file");
}
    return 0 ;
}