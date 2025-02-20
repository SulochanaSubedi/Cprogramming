#include<stdio.h>

void swap(int, int);

int main()
{
	int a, b;
	a=99, b=89;
	printf("Before function calling, a and b are: %d\t%d", a, b);
	swap(a, b);
	printf("\nEnter function calling, a and b are: %d\t%d", a, b);
	return 0;
}

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\nThe values within functions are: %d\t%d", x, y);
}
