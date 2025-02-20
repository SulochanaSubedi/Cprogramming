#include<stdio.h>

int main()
{
	int P, T;
	float R, si;
	P=6000;
	T=2;
	R=3.5;
	si=(P*T*R)/100;
	printf("The simple interest is %.2f", si);
	return 0;
}

/*
Output:
The simple interest is 420.00
*/
