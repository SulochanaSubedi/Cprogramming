#include<stdio.h>
#define pi 3.1428

int main()
{
	int majoraxis, minoraxis;
	float area;
	majoraxis=10;
	minoraxis=7;
	area=pi*majoraxis*minoraxis;
	printf("The area in cm2 is %.2f", area);
	return 0;
}

/*
Output:
The area in cm2 is 220.00
*/
