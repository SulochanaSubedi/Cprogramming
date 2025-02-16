#include <stdio.h>

int isPrime(int num) {
    if (num < 2) 
         return 0;
    
    int i, count = 0;
    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            count++;
    }
    
    return (count == 2) ? 1 : 0; 
}

int main() {
    FILE *sourceFile, *destFile;
    int n1, n2, i;

    printf("Enter the range (n1 n2): ");
    scanf("%d %d", &n1, &n2);

    sourceFile = fopen("source.txt", "w");
    

    for (i = n1; i <= n2; i++) {
        if (isPrime(i)) {
            fprintf(sourceFile, "%d ", i);
        }
    }
    fclose(sourceFile);

    sourceFile = fopen("source.txt", "r");
    destFile = fopen("destination.txt", "w");
    
    while (fscanf(sourceFile, "%d", &i) != EOF) {
        fprintf(destFile, "%d ", i);  
    }

    fclose(sourceFile);
    fclose(destFile);

    destFile = fopen("destination.txt", "r");
    printf("\nPrime numbers in the range [%d, %d]:\n", n1, n2);
    while (fscanf(destFile, "%d", &i) != EOF) {
        printf("%d ", i);
    }
    printf("\n");

    fclose(destFile);
    return 0;
}

