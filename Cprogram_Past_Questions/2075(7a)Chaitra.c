#include<stdio.h>

int main()
{
	int a=10, *b, **c;
	b=&a;
	c=&b;
	
	printf("%d\t%d\n", b, *c);
	printf("%d\t", &c);
	printf("%d\t%d\n", c, **c);
	printf("%d\t%d", *b+5, &c+2);
}
