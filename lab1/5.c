#include<stdio.h>
#define pi 3.1428

int main()
{
	int r, h;
	float tsa;
	r=7; 
	h=10;
	tsa=(2*pi*r*r)+(2*pi*r*h);
	printf("The tsa is %.2f", tsa);
	return 0;
}

/*
Output:
The tsa is 747.99
*/
