// Write a program to multiply two 3*3 matrix. 

#include<stdio.h>

int main()
{
	int a[3][3], b[3][3], mult[3][3], i, j, k, temp=0;
	printf("Enter elements of first matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
			temp+=a[i][k]*b[k][j];
	    	}
	    	mult[i][j]=temp;
	    	temp=0;
		}
	}
	printf("Multiplied Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", mult[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Output:
Enter elements of first matrix:
10
20
10
4
5
6
2
3
5
Enter elements of second matrix:
3
2
4
3
3
9
4
4
2
Multiplied Matrix:
130     120     240
51      47      73
35      33      45
*/

