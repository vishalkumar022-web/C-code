#include<stdio.h>
#include<string.h>
int main(){

FILE* fp ;
fp = fopen("Repeatative word.txt","w+");
int count = 0 ;
char arr[500];
printf("Enter your string ");
fgets(arr,sizeof(arr),stdin);
for (int i = 0 ;arr[i]!='\0';i++){
    if(arr[i]=='\n'){
        arr[i]='\0';
    }
}
fputs(arr,fp);

char word[100];
printf("Enter your word which you want to search ");
scanf("%s",word);

rewind(fp);
int x = 0 ;
char temp[100];  char ch ;

while((ch=fgetc(fp))!=EOF){
   
    if(ch!=' ' && ch!='\n'){
        temp[x]= ch ;
        x++ ;
    }
    else{temp[x]= '\0' ;
    if(strcmp(temp,word)==0){
        count++ ;
    }
    x = 0 ;
    }
}
if(x>0){
  if(strcmp(temp,word)==0){
    count++ ;
  }
}

printf("Total number of repeatative word for %s is %d",word,count);


    return 0 ;
}