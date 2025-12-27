#include<stdio.h>
#include<string.h>
int main(){

FILE* fp ;   FILE* sp ;

fp = fopen("merge1st.txt","w+");
sp = fopen("merge2nd.txt","w+");
char arr[500];   char brr[500];

printf("Enter your 1st string data ");
fgets(arr,sizeof(arr),stdin);
for (int i = 0 ;arr[i]!='\0';i++){
    if(arr[i]=='\n'){
        arr[i]='\0' ;
    }
}

fputs(arr,fp);
rewind(fp);

printf("Enter your 2nd string data ");
fgets(brr,sizeof(brr),stdin);
for (int i = 0  ; brr[i]!='\0' ;i++){
    if(brr[i]=='\n'){
        brr[i]='\0' ;
    }
}

fputs(brr,sp);
rewind(sp);


FILE* Merge;
Merge = fopen("Merged content.txt","a+");

char crr[1000];

int i = 0 ;   char ch ;  int j = 0  ;

while((ch= fgetc(fp))!=EOF){
    crr[i] = ch ;
    i++ ;
}
j = i ;

char c ;
while((c=fgetc(sp))!=EOF){
    crr[j] = c ;
    j++ ;
}
crr[j]= '\0';

rewind(Merge);

fputs(crr,Merge);

fclose(fp);
fclose(sp);
fclose(Merge);

    return 0 ;
}