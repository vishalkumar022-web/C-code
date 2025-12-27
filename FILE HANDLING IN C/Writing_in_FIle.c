#include<stdio.h>
#include<string.h>

int main(){

FILE* fp ;
fp = fopen("try.txt","w");
char ch ;   char str[500];

// for writing a single character ;
// printf("Enter your character ");
// scanf("%c",&ch);
//  fputc(ch,fp);

// for Writing a complete string ;
printf("Enter your string ");

fgets(str,sizeof(str),stdin);

fputs(str,fp);

fclose(fp);
    return 0 ;
}