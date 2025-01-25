#include<stdio.h>

float product(float, int);

int main()
{
	float first, pro;
	int second;
	printf("Enter a float value:");
	scanf("%f", &first);
	printf("Enter an integer:");
	scanf("%d", &second);
	pro=product(first, second);
	printf("The product is: \t%.2f", pro);
	return 0;
}

float product(float a, int b)
{
	float product;
	product=a*b;
	return(product);
}



