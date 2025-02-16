#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("filec.txt", "r");
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  
        count++;   
    }

    fclose(fp);

    printf("\nTotal number of characters in file: %d\n", count);

    return 0;
}

