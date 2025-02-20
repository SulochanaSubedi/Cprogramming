#include<stdio.h>

float power(float x, int n)
{
	int i;
	float result=1;
	for(i=1;i<=n; i++)
	result*=x;
	return result;
}

int main()
{
	float x, y;
	int n;
	printf("Enter base x in float and power n in integer:\n");
	scanf("%f%d", &x, &n);
	y=power(x,n);
	printf("The %.2f raised to the power %d is: %.2f", x, n, y);
	return 0;
}
