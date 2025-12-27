#include<stdio.h>
#include<string.h>

int main(){

FILE* fp ;
fp = fopen("Search.txt","w+");

char arr[500];
printf("Enter your string ");
fgets(arr,sizeof(arr),stdin);
for(int i = 0 ; arr[i]!='\0' ;i++){
    if(arr[i]=='\n'){
        arr[i]= '\0' ;
    }
}

fputs(arr,fp);

char word[100];

printf("Enter your word which you want to search ");

scanf("%s",word);

rewind(fp);
 int flag = 0 ;
char temp[100]; char ch ;     int x = 0 ;

while((ch=fgetc(fp))!=EOF){
    if(ch!=' '&&ch!='\n'){
       
        temp[x] = ch ;
        x++ ;
    }
    else{
        temp[x]='\0';
        if(strcmp(word,temp)==0){
            flag = 1 ;
        }
         x= 0 ;
    }
}
if(x>0){
    if(strcmp(temp,word)==0){
        flag =1 ;
    }
}
if(flag == 1){
    printf("%s is present in a given string ");
}
else{
    printf("%s is not present in a given string ");
}

    return 0 ;
}