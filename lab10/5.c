#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    float height;

    file = fopen("person.txt", "w");
    printf("Enter Name, Age, and Height: ");
    scanf("%s %d %f", name, &age, &height);

    fprintf(file, "%s %d %.2f\n", name, age, height);
    fclose(file);
    
    file = fopen("person.txt", "r");
    fscanf(file, "%s %d %f", name, &age, &height);
    printf("\nDetails Read from File:\n");
    printf("Name: %s\nAge: %d\nHeight: %.2f\n", name, age, height);

    fclose(file);
    return 0;
}

/*
Output:
Enter Name, Age, and Height: Hari 12 2.54

Details Read from File:
Name: Hari
Age: 12
Height: 2.54
*/
