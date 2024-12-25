//Write a program to check odd or even number (b) using bitwise operator.

#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d", &a);
	if(a&1)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;
}
