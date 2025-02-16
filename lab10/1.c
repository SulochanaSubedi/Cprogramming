#include<stdio.h>

struct Student {
    int rollno;
    char name[50];
    char address[100];
    int age;
    float physics, c, math;
};

int main() {
    struct Student students[3];
    FILE *file;
    int i;
    file = fopen("D:\\std.txt", "wb");
    
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Address: ");
        scanf(" %s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks in Physics: ");
        scanf("%f", &students[i].physics);
        printf("Marks in C: ");
        scanf("%f", &students[i].c);
        printf("Marks in Math: ");
        scanf("%f", &students[i].math);
    
        fwrite(&students[i], sizeof(struct Student), 1, file);
    }

    fclose(file);
    
    file = fopen("D:\\std.txt", "rb");
    
    printf("\nStudent Records:\n");
    for (i = 0; i < 3; i++) {
        fread(&students[i], sizeof(struct Student), 1, file);
        float avg = (students[i].physics + students[i].c + students[i].math) / 3.0;
        printf("\nRoll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Physics: %.2f, C: %.2f, Math: %.2f\n", students[i].physics, students[i].c, students[i].math);
        printf("Average Marks: %.2f\n", avg);
    }

    fclose(file);
    return 0;
}

/*
Output:
Enter details for student 1:
Roll No: 18
Name: Sulocahana
Address: Khaireni
Age: 18
Marks in Physics: 100
Marks in C: 100
Marks in Math: 100
Enter details for student 2:
Roll No: 6
Name: Rita
Address: Ktm
Age: 17
Marks in Physics: 98
Marks in C: 89
Marks in Math: 19
Enter details for student 3:
Roll No: 55
Name: Tina
Address: Ktm
Age: 19
Marks in Physics: 67
Marks in C: 56
Marks in Math: 45

Student Records:

Roll No: 18
Name: Sulocahana
Address: Khaireni
Age: 18
Physics: 100.00, C: 100.00, Math: 100.00
Average Marks: 100.00

Roll No: 6
Name: Rita
Address: Ktm
Age: 17
Physics: 98.00, C: 89.00, Math: 19.00
Average Marks: 68.67

Roll No: 55
Name: Tina
Address: Ktm
Age: 19
Physics: 67.00, C: 56.00, Math: 45.00
Average Marks: 56.00
*/
