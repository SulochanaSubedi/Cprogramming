//Write a program to find the factorial of a given number.

#include<stdio.h>

int main()
{
	int i, fact=1, n;
	printf("Enter a number whose factorial is determined:\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("The factorial is %d",fact);
	return 0;
}
