#include<stdio.h>

int sum(int);

int main(void)
{
	int n, s;
	printf("Enter n:");
	scanf("%d", &n);
	s=sum(n);
	printf("The sum of first natural numbers: %d", s);
	return 0;
}

int sum(int num)
{
	if(num<=1)
	return 1;
	return num+sum(num-1);
}
