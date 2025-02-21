#include<stdio.h>

float p(float b, int e)
{
	if(e<0)
	{
		printf("\nCan not raise to a negative exponent\n");
		exit(1);
	}
	else if(e==0)
	return 1.0;
	else
	return (b*p(b, e-1));
}

int main()
{
	float y, x;
	int n;
	printf("Enter base number:\n");
	scanf("%f", &x);
	printf("Enter exponent in integer:\n");
	scanf("%d", &n);
	y=p(x, n);
	printf("The result is %f", y);
}
