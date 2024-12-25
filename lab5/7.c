//Write a program to generate fibonacci series until the term is less than 500.

#include<stdio.h>

int main()
{
	long int a=0, b=1, c, d;
	int i;
	printf("%lu %lu\t",a,b);
	for(i=0;i<500;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%lu\t",c);
	}
	return 0;
}
