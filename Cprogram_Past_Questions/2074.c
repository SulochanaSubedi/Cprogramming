#include<stdio.h>

int fibonnaci(int);
char prime(int);


int main()
{
	int n, f;
	char c;
	printf("Enter nth term:\n");
	scanf("%d", &n);
	f=fibonnaci(n);
	printf("The fibonnaci of nth term is %d", f);
	if(c=='Y')
	printf("\n'%d' is prime number", f);
	else
	printf("\n'%d' is not prime number", f);
	return 0;
}

int fibonnaci(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return (fibonnaci(n-1)+fibonnaci(n-2));
	
}

char prime(int f)
{
	int i, count=0;
	for(i=1; i<=f; i++)
	{
		if(f%i==0)
		count++;
	}
	if(count==2)
	return('Y');
	else
	return('N');
}
