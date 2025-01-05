// Write a program to find the sum of all the elements of an array using pointers.

#include<stdio.h>

int main()
{
	int n, a[n], i, sum=0;
	printf("Enter how many numbers:\n");
	scanf("%d", &n);
	printf("Enter those numbers:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
	    sum+=*(a+i);	
	}
	printf("\nThe sum is %d", sum);
	return 0;
}

/*
Output:
Enter how many numbers:
5
Enter those numbers:
10
10
10
10
9

The sum is 49
*/
