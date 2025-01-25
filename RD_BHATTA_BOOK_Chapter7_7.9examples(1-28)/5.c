#include<stdio.h>
#define PI 3.1428

float areaOfCircle(float r)
{
	return (PI*r*r); 
}

int main()
{
	float r1, r2, a1, a2;
	printf("\nEnter radius of first circle:\t");
	scanf("%f",&r1);
	printf("\nEnter radius of second circle:\t");
	scanf("%f", &r2);
	a1=areaOfCircle(r1);
	a2=areaOfCircle(r2);
	printf("\nThe area of first circle is: \t%f",a1);
	printf("\nThe area of second circle is: \t%f",a2);
	return 0;
}
