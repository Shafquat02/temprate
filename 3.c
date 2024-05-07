#include <stdio.h>

int sumofdigit(int n) {
    int firstDigit = 0, lastDigit = 0, sum = 0;

    //first digit
    firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    //last digit
    lastDigit = n % 10;

    sum = firstDigit + lastDigit;

    return sum;
}

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sumofdigit(num);

    printf("The sum of the first and the last digit of %d is %d.\n", num, sum);

    return 0;
}