//Write a program that asks a number and test the number whether it is multiple of 5 or not, divisible by 7 but not by eleven. 

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number:\n");
    scanf("%d", &number);

    if (number % 5 == 0) {
        printf("%d is a multiple of 5, ", number);
    } else {
        printf("%d is not a multiple of 5, ", number);
    }

    if (number % 7 == 0 && number % 11 != 0) {
        printf("divisible by 7 but not divisible by 11.");
    } else {
        printf("Condition does not match.");
    }

    return 0;
}

