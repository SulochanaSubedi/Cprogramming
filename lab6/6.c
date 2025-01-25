#include<stdio.h>


// Global variable
int global_var = 10;

void demoFunction() {
    // Static variable
    static int static_var = 5;

    // Local variable
    int local_var = 2;

    // Increment variables
    global_var++;
    static_var++;
    local_var++;

    // Print values of variables
    printf("Inside demoFunction:\n");
    printf("Global variable: %d\n", global_var);
    printf("Static variable: %d\n", static_var);
    printf("Local variable: %d\n", local_var);
    printf("-------------------------\n");
}

int main() {
    printf("Initial Global variable in main: %d\n", global_var);

    // Call demoFunction multiple times to show behavior of variables
    demoFunction(); // First call
    demoFunction(); // Second call
    demoFunction(); // Third call

    // Print final value of the global variable
    printf("Final Global variable in main: %d\n", global_var);

    return 0;
}

/*
Output:
Initial Global variable in main: 10
Inside demoFunction:
Global variable: 11
Static variable: 6
Local variable: 3
-------------------------
Inside demoFunction:
Global variable: 12
Static variable: 7
Local variable: 3
-------------------------
Inside demoFunction:
Global variable: 13
Static variable: 8
Local variable: 3
-------------------------
Final Global variable in main: 13
*/

