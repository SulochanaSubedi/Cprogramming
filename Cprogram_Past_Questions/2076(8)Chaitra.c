#include <stdio.h>


void myStrcpy(char *dest, const char *src) {
    while (*src != '\0') {  
        *dest = *src;       
        dest++;              
        src++;               
    }
    *dest = '\0';             
}

int main() {
    char source[] = "Hello, World!";
    char destination[50]; 

    myStrcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}

