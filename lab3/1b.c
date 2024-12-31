//Define the math operator ‘+’ as PLUS, ‘-‘ as MINUS, ‘*’ as MULT & ‘/’ as DIVIDE using preprocessor directives and do the operations over variables (x,y) defined on above question like z=x PLUS y.

#include<stdio.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /

int main()
{
	float x,y;
	printf("Enter two numbers:\n");
	scanf("%f%f", &x, &y);
	printf("Addition is %.2f\n", x PLUS y);
	printf("Subtraction is %.2f\n", x MINUS y);
	printf("Multiplication is %.2f\n", x MULT y);
	printf("Division is %.2f", x DIVIDE y);
	return 0;
}
