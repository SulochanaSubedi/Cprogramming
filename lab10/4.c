#include <stdio.h>


int main() {
    FILE *fp;
    
    // Predefined set of strings
    char strings[5][40] = {
        "Hello, this is a test line.\n",
        "Another sample string input.\n",
        "Learning file handling in C.\n",
        "fputs() writes a string to file.\n",
        "fgets() reads a string from file.\n"
    };

    // Writing to file
    fp = fopen("stringc.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (int i = 0; i < MAX_LINES; i++) {
        fputs(strings[i], fp); // Write string to file
    }

    fclose(fp); // Close file after writing

    // Reading from file
    fp = fopen("stringc.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char str[MAX_LENGTH];
    printf("\nContents of the file:\n");
    while (fgets(str, MAX_LENGTH, fp) != NULL) {
        printf("%s", str); // Display each line
    }

    fclose(fp); // Close file after reading

    return 0;
}

