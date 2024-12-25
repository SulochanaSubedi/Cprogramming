//Write a program to display your name and roll number in C.

#include<stdio.h>

int main()
{
	char name[30];
	int rollno;
	printf("Enter your name and rollno:\n");
	scanf("%[^\n]s", name);
	scanf("%d", &rollno);
	printf("Name:%s and Rollno:%d", name, rollno);
	return 0;
}
