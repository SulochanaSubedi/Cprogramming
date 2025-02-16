//Calculating power using recursive function.

#include<stdio.h>

int pw(int n, int a)
{
	if(a==0)
	return 1;
	if(a==1)
	return n
	if(a>=1)
	return (pw(n, 1)*pw(n, a-1));
}

int main()
{
	int n;
	int a;
	printf("Enter the number whose power is to be determined:\n");
	scanf("%d", &n);
	printf("Enter the power:\n");
	scanf("%d", &a);
	int result=pw(n,a);
	printf("The result is %d", result);
	return 0;
}
