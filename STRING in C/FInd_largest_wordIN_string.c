#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    char temp[100];
    char largest[100];
    int i = 0, x = 0;
    int max_len = 0;

    printf("Enter your complete string :--> ");
    fgets(arr, sizeof(arr), stdin);
for (int i = 0 ; arr[i]!='\0' ;i++) {
        if (arr[i] != ' ' && arr[i] != '\n') {
            temp[x] = arr[i];
            x++;
        } else {
            temp[x] = '\0';   // terminate current word
            if (x > 0) {      // agar koi word bana hai
                int len = strlen(temp);
                if (len > max_len) {
                    max_len = len;
                    strcpy(largest, temp); // largest word update
                }
            }
            x = 0; // next word ke liye reset
        }
    }

    // agar last word baaki hai
    if (x > 0) {
       
        int len = strlen(temp);
        if (len > max_len) {
            max_len = len;
            strcpy(largest, temp);
        }
    }

    printf("Largest word is: %s (length = %d)\n", largest, max_len);

    return 0;
}
