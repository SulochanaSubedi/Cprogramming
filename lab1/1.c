#include<stdio.h>

int main()
{
	char name[30];
	int rollno;
	printf("Enter your name and rollno:\n");
	scanf("%[^\n]s", name);
	scanf("%d", &rollno);
	printf("Name: %s and Rollno: %d", name, rollno);
	return 0;
}

/*
Output:
Enter your name and rollno:
Sulochana Subedi
42
Name: Sulochana Subedi and Rollno: 42
*/
