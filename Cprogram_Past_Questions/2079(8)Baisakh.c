#include <stdio.h>
#include <string.h>
#include <ctype.h>

void extract_letters(char *input_string, char *output_string) {
    int i = 0, j = 0;
    while (input_string[i] != '\0') {
        if (isalpha(input_string[i])) {
            output_string[j] = input_string[i];
            j++;
        }
        i++;
    }
    output_string[j] = '\0';
}

int main() {
    char input_string[100]; 
    char output_string[100];
    int i = 0;
    char ch;

    printf("Enter a string (press Enter to finish):\n");

    while ((ch = getchar()) != '\n') {
        input_string[i] = ch;
        i++;
    }
    input_string[i] = '\0'; 

    extract_letters(input_string, output_string);

    printf("Original string: %s\n", input_string);
    printf("String with only letters: %s\n", output_string);

    return 0;
}
