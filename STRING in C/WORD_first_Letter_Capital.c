//VVI-->To convert only first letter of a word in UpperCase in a String...

#include<stdio.h>
#include<string.h>

int main(){

char str[1000];

printf("Enter your string ");
fgets(str,sizeof(str),stdin);

for (int i = 0 ;str[i]!='\0';i++){
    if(str[i]=='\n'){
        str[i]= '\0';
    }

if(str[0]>='a'&&str[0]<='z'){
    str[0]=str[0]-32 ;
}

}
for(int i = 0 ;str[i]!='\0';i++){
    if(str[i]==' '&&str[i+1]>='a'&&str[i+1]<='z'){
        str[i+1]= str[i+1]-32 ;
    }
}

for (int i = 0 ;str[i]!='\0';i++){
    printf("%c",str[i]);
}

    return 0 ;

}