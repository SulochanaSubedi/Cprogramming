// Write a program to find biggest among three numbers using pointer.

#include<stdio.h>

int main()
{
	int a, b, c;
	int *x, *y, *z;
	x=&a;
	y=&b;
	z=&c;
	printf("Enter three numbers:\n");
	scanf("%d%d%d", x, y, z);
	if(*x>*y && *x>*z)
	{
		printf("\nThe biggest number is %d", *x);
	}
	else if(*y>*x && *y>*z)
	{
		printf("\nThe biggest number is %d", *y);
	}
	else
	{
		printf("\nThe biggest number is %d", *z);
	}
	return 0;
}

/*
Output:
Enter three numbers:
10 100 99

The biggest number is 100
*/
