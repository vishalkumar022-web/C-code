#include <stdio.h>
#include <string.h>

int main() {

    char arr[1000];         
    char word[50];     
    int c = 0;

    printf("Enter your complete string :--> ");
    fgets(arr, sizeof(arr), stdin);

    printf("Enter your word which you want to search and skip :--> ");
    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = '\0';  // Remove newline from word input

    char temp[100];
    char flag[1000] = " ";   // New string excluding the matched word

    int  x = 0;

    for (int i = 0 ; arr[i]!='\0' ; i++) {

        if (arr[i] != ' ' && arr[i] != '\n') {
            temp[x] = arr[i];
            x++;

        } 
        else {
            temp[x] = '\0';  // End of word

            if (strcmp(word, temp) == 0) {
               c++ ;
            } else {
                strcat(flag, temp);  
               
            }

            x = 0;  // Reset for next word
        }
       
    }

    // Check for last word ;
    if (x > 0) {
      
        if (strcmp(word, temp) == 0) {
            c++ ;
        } else {
            strcat(flag, temp);
        }
    }

    printf("New string after deleting a specific word is \n");
     
    printf("  %s\n", flag);

    return 0;
}
