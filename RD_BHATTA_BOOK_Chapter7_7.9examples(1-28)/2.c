#include<stdio.h>

long FindFactorial(int n)
{
	long fact=1;
	int i;
	for(i=1; i<=n; i++)
	fact*=i;
	return(fact);
}

int main()
{
	long f;
	int n;
	printf("Enter a number whose factorial is to be calculated:");
	scanf("%d", &n);
	f=FindFactorial(n);
	printf("The factorial of %d is: %ld", n,f);
	return 0;
}
