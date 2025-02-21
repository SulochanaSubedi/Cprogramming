#include<stdio.h>

int abc(int *, int *);
int main()
{
	int a, b,l;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("Before function call: a=%d and b=%d\n", a,b);
	abc(&a, &b);
	printf("\nAfter function call: a=%d and b=%d\n", a, b);
	getch();
}

int abc(int *a, int *b)
{
	*a=*a+5;
	*b=*b+3;
	printf("Within function: a=%d and b=%d", *a, *b);
}
