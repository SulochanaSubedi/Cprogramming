// Write a program to enter 10 floating numbers in an array and display it.

#include<stdio.h>

int main()
{
	int i;
	float a[10];
	printf("Enter 10 numbers:\n");
	for(i=0; i<10; i++)
	{
		scanf("%f", &a[i]);
	}
	printf("Displaying Entered numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("%f\t", a[i]);
	}
	return 0;
}

/*
Output:
Enter 10 numbers:
2
3
4.0
5
6.9
8
10
11
13
50
Displaying Entered numbers:
2.000000        3.000000        4.000000        5.000000        6.900000        8.000000        10.000000       11.000000       13.000000       50.000000
*/
