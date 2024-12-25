//Write a program to check odd or even number (a) using modulus operator.

#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
