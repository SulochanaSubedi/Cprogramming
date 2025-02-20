//Write a program to compare two strings.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50], b[50];
	printf("Enter the first string:\n");
	scanf("%s", a);
	printf("Enter the second string:\n");
	scanf("%s", b);
	if(strcmp(a, b)==0)
	{
		printf("\nThe strings are equal.");
	}
	else if(strcmp(a,b)>0)
	{
		printf("\nThe first string is greater than the second one.");
	}
	else
	{
		printf("\nThe second string is greater than the first one.");
	}
	return 0;
}

/*
Output:
Enter the first string:
Sita
Enter the second string:
Ram

The first string is greater than the second one.
*/
