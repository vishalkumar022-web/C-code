#include <stdio.h>


int countDivisors(int num, int i, int count) {
    if (i > num) {
        return count;
    }

    if (num % i == 0) {
        count++;
    }
    i++ ;

    countDivisors(num, i, count);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = countDivisors(num, 1, 0);

    if (count == 2) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
