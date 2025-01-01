// Write a program to display largest and smallest element of an array defined in Q. No. 1.

#include<stdio.h>

int main()
{
	int i;
	float a[20], largest, smallest;
	printf("Enter 10 numbers:\n");;
	for(i=0; i<10; i++)
	{
		scanf("%f", &a[i]);
	}
	printf("Displaying Entered numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("%f\t", a[i]);
	}
	largest=a[0];
	smallest=a[0];
	for(i=0; i<10; i++)
	{
		if(largest<a[i])
		largest=a[i];
		
		if(smallest>a[i])
		smallest=a[i];
	}
	printf("\nThe largest is %f", largest);
	printf("\nThe smallest is %f", smallest);
	return 0;
}

/*
Output:
Enter 10 numbers:
1
2.1
3.1
40
100
78
89
67
90
101
Displaying Entered numbers:
1.000000        2.100000        3.100000        40.000000       100.000000      78.000000       89.000000       67.000000       90.000000       101.000000
The largest is 101.000000
The smallest is 1.000000
*/

