#include<stdio.h>
#include<string.h>

int main(){

FILE*fp;
fp = fopen("count.txt","r");


 char ch ;

rewind(fp);
int count_char = 0 ;   int c_word = 0 ;   int c_line = 0 ;
while((ch = fgetc(fp))!=EOF){
    if(ch!=' '&& ch!='\n'){
   count_char++ ;}
   if(ch==' '|| ch=='\n'){
        c_word++ ;
   }
   if(ch=='\n'){
    c_line++ ;
   }
}
printf("Total number of character = %d\n",count_char);
printf("Total number of word is :--> %d\n",c_word);
printf("Total number of line in a file is %d\n",c_line);
    
fclose(fp);
return 0 ;
}