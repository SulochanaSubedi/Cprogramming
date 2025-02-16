#include<stdio.h>
int fibo(int);
char prime(int);

int main()
{
	int n, fib;
	char chk;
	printf("Enter the value of n:");
	scanf("%d", &n);
	fib=fibo(n);
	printf("%d th fibonacci term is %d", n, fib);
	chk=prime(fib);
	if(chk=='Y')
	printf("\n%d is prime", fib);
	else
	printf("\n%d is not prime", fib);
	return 0;
}

int fibo(int num)
{
	if(num==1)
	return 0;
	else if(num==2)
	return 1;
	else
	return (fibo(num-1)+fibo(num-2));
}

char prime(int num)
{
	int i, ctr=0;
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		ctr++;
	}
	if(ctr==0)
	return 'Y';
	else
	return 'N';
}
