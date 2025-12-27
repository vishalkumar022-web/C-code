// r+ mode ka majorly kaam hai given file ko pahle read krega and then write krega but "w" mode jaisa
//write nhi ki pahle completely sara data ko ye erase nahi krta ye jo bhi ham read ke baad write karenge 
// wo data content ke starting se likhe huwe ko overwrite karega and baaki sab aaise hi chode deta hai
// BEST Explaination milega by given below code.
#include<stdio.h>
#include<string.h>

int main(){
FILE* fp ;
fp = fopen("try.txt","r+");
char ch ;  char str[50];
if(fp==NULL){
    printf("Error ");
    return 1 ;
}

// First for Reading a given file :-->

while(!feof(fp)){
    fgets(str,sizeof(str),fp);
    // ch =  fgetc(fp);
    printf("%s",str);
}

// Now for Writing in a file :--> 
rewind(fp);

printf("Enter your string which you want to write in a given file ");
fgets(str,sizeof(str),stdin);

fputs(str,fp);




fclose(fp);

    return 0 ;
}



