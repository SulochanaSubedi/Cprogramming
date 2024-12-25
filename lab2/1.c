//Write a prgram to take input of name, rollno and marks obtained by a student in 5 subjects each have its full marks and display the name, rollno with percentage score secured.

#include<stdio.h>

int main()
{
	int rollno;
	float m1, m2, m3, m4, m5, total, percentage;
	char name[30];
	printf("Enter name and rollno:\n");
	scanf("%[^\n]s", name);
	scanf("%d", &rollno);
	printf("Enter marks of 5 subjects:\n");
	scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
	total=m1+m2+m3+m4+m5;
	percentage=total/5;
	printf("Name: %s , Rollno: %d secured percentage: %.2f", name, rollno, percentage);
    return 0;
}
