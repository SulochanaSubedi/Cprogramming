//Write a program to find the sum of all individual digits of the number using do while loop.

#include<stdio.h>

int main()
{
	int a, sum=0,b;
	printf("Enter number:\n");
	scanf("%d", &a);
	do
	{
		b=a%10;
		sum+=b;
		a/=10;
	}while(a);
	
	printf("The sum of digits of number: %d", sum);
	return 0;
}
