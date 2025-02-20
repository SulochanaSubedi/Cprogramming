#include<stdio.h>

struct complex
{
	int x, y;
}c, c1, sum, diff;

int main()
{
	printf("Enter real and imaginary part for first complex number:\n");
	scanf("%d%d", &c.x, &c.y);
	printf("Enter real and imaginary part for second complex number:\n");
	scanf("%d%d", &c1.x, &c1.y);
	sum.x=c.x+c1.x;
	sum.y=c.y+c1.y;
	diff.x=c.x-c1.x;
	diff.y=c.y-c1.y;
	printf("\nSum= %d+%di", sum.x, sum.y);
	printf("\nDifference= %d+%di", diff.x, diff.y);
	return 0;
}

/*
Output:
Enter real and imaginary part for first complex number:
2 3
Enter real and imaginary part for second complex number:
5 2

Sum= 7+5i
Difference= -3+1i
*/
