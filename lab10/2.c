#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    file = fopen("filec.txt", "w");
    
    printf("Enter characters (press Enter to stop):\n");

    while ((ch = getchar()) != '\n') {
        fputc(ch, file);
    }
    
    fclose(file);
    
    return 0;
}

/*
Output:
In filec.txt:
sseennn
*/

