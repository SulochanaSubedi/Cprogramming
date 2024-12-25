//Write a program to checkk odd or even number (d) using conditional operator.

#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d", &a);
	int b=(a%2==0)?printf("Even"):printf("Odd");
	return 0;
}
