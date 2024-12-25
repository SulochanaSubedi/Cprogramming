//Write a program to check odd or even number (c) without using bitwise and modulus operator.

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a number:\n");
	scanf("%d", &a);
	b=a/2;
	if(a==(b*2))
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
