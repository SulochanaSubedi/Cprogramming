#include <stdio.h>

int main() {
    int number;

    // Ask for user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Test conditions
    if (number % 5 == 0) {
        printf("The number %d is a multiple of 5.\n", number);
    } else {
        printf("The number %d is not a multiple of 5.\n", number);
    }

    if (number % 7 == 0 && number % 11 != 0) {
        printf("The number %d is divisible by 7 but not divisible by 11.\n", number);
    } else {
        printf("The number %d does not meet the condition of being divisible by 7 but not divisible by 11.\n", number);
    }

    return 0;
}

