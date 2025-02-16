#include <stdio.h>
#include <string.h>

int main() {
    char *words[5] = {"apple", "banana", "cherry", "date", "apricot"}; 
    char *temp;
    
    int i, j;

    // Bubble sort
    for (i = 0; i < 4; i++) {
        for ( j = 0; j < 4 - i; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                // Swap words[j] and words[j+1]
                temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    // Print sorted words
    printf("Sorted words:\n");
    for ( i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
