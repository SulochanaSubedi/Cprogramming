//Write a pragram to calculate simple interset for a given P=$6000, T=2years, R=3.5p.a.

#include<stdio.h>

int main()
{
	float p=6000, t=2, r=3.5, si;
	si=(p*t*r)/100;
	printf("The simple interest is %.2f", si);
	return 0;
}
