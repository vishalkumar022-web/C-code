#include <stdio.h>
int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    }
   int rem = num  % 10 ;
   rev= rev * 10 + rem ;
        num = num/10 ;

reverseNumber(num,rev) ;

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num, 0);

    if (num == reversed) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
