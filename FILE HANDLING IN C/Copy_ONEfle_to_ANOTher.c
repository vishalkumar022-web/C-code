#include<stdio.h>
#include<string.h>
int main(){

FILE*fp;  FILE* cp ;    int flag = 0 ;    int flag1 = 0 ;

fp = fopen("source.txt","w+");
cp = fopen("Destination.txt","w");

char arr[500];

printf("ENter your string which you want to write and copy ");

fgets(arr,sizeof(arr),stdin);
int i = 0 ;
while(arr[i]!='\0'){
    if(arr[i]=='\n'){
        arr[i] = '\0' ;
    }
    i++ ;
}

fputs(arr,fp);

rewind(fp);

char ch ;

while( (ch = fgetc(fp))!=EOF){
      fputc(ch,cp);
}
fclose(fp);
fclose(cp);
remove("source.txt");

//rename("Old file_name","New file name");

rename("destination.txt","source.txt");

    return 0 ;
}