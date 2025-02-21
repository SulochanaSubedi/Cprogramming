#include<stdio.h>

int getremainder(int *a, int *b)
{
	int c;
	c=*a%*b;
	return c;
}

int main()
{
	int *p, *q, x=20, y=3,z;
	p=&x;
	q=&y;
	z=getremainder(p,q);
	printf("The remainder is: %d", z);
	return 0;
}
