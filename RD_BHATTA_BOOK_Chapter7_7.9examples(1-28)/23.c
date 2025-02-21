#include<stdio.h>

int multiply(int, int);

int main()
{
	int a, b, c;
	printf("Enter integers:\n");
	scanf("%d%d", &a, &b);
	c=multiply(a, b);
	printf("Multiplication is %d", c);
	return 0;
}

int multiply(int a, int b)
{
	static int pr=0, i=0;
	if(i<a)
	{
		pr=pr+b;
		i++;
		multiply(a, b);
	}
	return pr;
}
