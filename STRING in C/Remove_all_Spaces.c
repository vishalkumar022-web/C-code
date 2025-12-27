#include <stdio.h>
#include<string.h>

int main() {
    char str[1000];
    fgets(str,sizeof(str),stdin);
   str [strcspn(str,"\n")]= '\0' ;

    
    int j = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];  
            j++;
        }
    }
    str[j] = '\0';  

   
    for (j = 0; str[j] != '\0'; j++) {
        printf("%c", str[j]);
    }

    return 0;
}
