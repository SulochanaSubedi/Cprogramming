#include <stdio.h>

int main() {
    char sentence[200], largest[50], word[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence); 

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ') {
            word[j++] = sentence[i]; 
            len++;
        } else {
            word[j] = '\0';  
            if (len > maxLen) {  
                maxLen = len;
                int k;
                for (k = 0; word[k] != '\0'; k++) {
                    largest[k] = word[k];  
                }
                largest[k] = '\0';
            }
            j = 0; 
            len = 0;
        }
        i++;
    }

    word[j] = '\0';
    if (len > maxLen) {
        maxLen = len;
        int k;
        for (k = 0; word[k] != '\0'; k++) {
            largest[k] = word[k];
        }
        largest[k] = '\0';
    }

    printf("Largest word: %s\n", largest);
    printf("Length: %d\n", maxLen);

    return 0;
}

