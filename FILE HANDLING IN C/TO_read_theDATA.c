// FOR READ ALL THESE DATA of Given files :-->  

#include<stdio.h>
#include<string.h>
int main(){

FILE *fp ;
fp = fopen("abc.txt","r");

char ch ;
char arr[50];

while(!feof(fp)){
    // fgets(arr,sizeof(arr),fp);
    fscanf(fp,"%s",arr);
    printf("%s \n",arr);
}

// while(!feof(fp)){
//     // ch = fgetc(fp);
//     fscanf(fp,"%c",&ch);
//     printf("%c",ch);
// }

fclose(fp);

    return 0 ;
}