// WAP to find transpose of a 3*3 matrix.

#include<stdio.h>

int main()
{
	int a[3][3], i, j;
	printf("Enter elements of matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	
	printf("Transposed Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}

/*
Output:
Enter elements of matrix:
1
2
3
4
5
6
7
8
9
Transposed Matrix:
1       4       7
2       5       8
3       6       9
*/
