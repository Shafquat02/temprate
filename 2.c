#include <stdio.h>

int count(int n) {
    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int num, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = count(num);

    printf("The number of digits in %d is %d.\n", num, digits);

    return 0;
}