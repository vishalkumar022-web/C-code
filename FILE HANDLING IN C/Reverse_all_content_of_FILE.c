#include<stdio.h>
#include<string.h>

int main(){
int count = 0 ;
FILE*fp ;
FILE* sp ;
fp = fopen("content.txt","w+");

char arr[500];
printf("Enter your string ");
fgets(arr,sizeof(arr),stdin);
for (int i = 0 ;arr[i]!='\0' ;i++){
    if(arr[i]=='\n'){
        arr[i]= '\0' ;
    }
}

fputs(arr,fp);

rewind(fp);

char ch ;
while((ch=fgetc(fp))!=EOF){
    count++ ;
}
rewind(fp);

char brr[count+1];
for(int i = 0 ; i<count ;i++){
brr[i] = fgetc(fp) ;
}
brr[count] ='\0' ;

for (int i = 0, j = count-1 ; i<=j ;i++,j--){
        char temp = arr[i];
        brr[i] = arr[j];
        brr[j] = temp ;
}

sp = fopen("reversed content.txt","w");

    fputs(brr,sp) ;

    fclose(fp);

    fclose(sp) ;

    return 0 ;
}