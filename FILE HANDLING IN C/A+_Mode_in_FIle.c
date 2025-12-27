#include<stdio.h>
#include<string.h>

int main(){
FILE* fp ;
fp = fopen("try.txt","a+");
char ch ;  char str[50];
if(fp==NULL){
    printf("Error ");
    return ;
}

// First Append all old content :--> 
printf("Enter your string which you want to write in a given file ");
fgets(str,sizeof(str),stdin);
fputs(str,fp);

rewind(fp);

// Then Reading all content :-->
while(!feof(fp)){
    // fgets(str,sizeof(str),fp);
    ch =  fgetc(fp);
    printf("%c",ch);
}

fclose(fp);

    return 0 ;
}

