#include <stdio.h>

int main() {
    int reverse = 0, number, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf("Reversed integer: %d\n", reverse);
    return 0;
}
// hiiii