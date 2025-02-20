#include<stdio.h>

int isPrime(int num)
{
	int i;
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		return 0;
	}
	if(i==num)
	return 1;
}

int main()
{
	int n, flag;
	printf("Enter a number:\n");
	scanf("%d", &n);
	flag=isPrime(n);
	if(flag==1)
	printf("The number is prime.");
	else
	printf("The number is not prime.");
	return 0;
}
