// Write a program to read two matrices of order 3 * 2, add them and display the resultant matrix in matrix form.

#include<stdio.h>

int main()
{
	int a[3][2], b[3][2], sum[3][2], i, j;
	printf("Enter elements of first matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Added Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Output:
Enter elements of first matrix:
1
2
3
4
5
6
Enter elements of second matrix:
1
2
3
4
5
6
Added Matrix:
2       4
6       8
10      12
*/
