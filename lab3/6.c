/* Write a program to take a character input from keyboard and check if it is a 
number or alphabet or special character using ASCII CODE. Again check if 
the character is using character functions below: 
a) Alphanumeric (isalnum) 
b) Blank character (isblank) 
c) Alphabetic (isalpha) 
d) Control character (iscntrl) 
e) Number-digit (isdigit) 
f) Upper case (isupper) 
g) Lower case (islower) 
h) Hexadecimal digit (ixdigit) 
i) Graphical character (isgraph)*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a single character: ");
    scanf("%c", &ch);
    int a=ch;
    printf("\nThe ASCII value: %d\n",a);

    // Checking character type using ASCII codes
    printf("\nUsing ASCII codes:\n");
    if (a >= 48 && a <= 57) {
        printf("The character '%c' is a Number.\n", ch);
    } else if ((a >=65 && a <= 90) || (a>= 97&& a<=122)) {
        printf("The character '%c' is an Alphabet.\n", ch);
    } else {
        printf("The character '%c' is a Special character.\n", ch);
    }

    // Checking using character functions
    printf("\nUsing character functions:\n");
    printf("Alphanumeric (isalnum): %s\n", isalnum(ch) ? "Yes" : "No");
    printf("Blank character (isblank): %s\n", isblank(ch) ? "Yes" : "No");
    printf("Alphabetic (isalpha): %s\n", isalpha(ch) ? "Yes" : "No");
    printf("Control character (iscntrl): %s\n", iscntrl(ch) ? "Yes" : "No");
    printf("Number-digit (isdigit): %s\n", isdigit(ch) ? "Yes" : "No");
    printf("Upper case (isupper): %s\n", isupper(ch) ? "Yes" : "No");
    printf("Lower case (islower): %s\n", islower(ch) ? "Yes" : "No");
    printf("Hexadecimal digit (isxdigit): %s\n", isxdigit(ch) ? "Yes" : "No");
    printf("Graphical character (isgraph): %s\n", isgraph(ch) ? "Yes" : "No");

    return 0;
}

