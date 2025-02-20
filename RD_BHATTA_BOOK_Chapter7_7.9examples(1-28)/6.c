#include<stdio.h>

float processData(float x, float y)
{
	return (x*y);
}

void displayData(float value)
{
	printf("The value is: %f", value);
}

int main()
{
	float a, b, sum;
	printf("Enter two numbers:\n");
	scanf("%f%f", &a, &b);
	sum=processData(a, b);
	displayData(sum);
	return 0;
}
