#include<stdio.h>

int sum(int n)
{
    
	if(n>0)
	return(sum(n-1)+n);
}

int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	printf("The sum from 1 upto n is %d", sum(n));
	return 0;
}
