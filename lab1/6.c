//Wrie a program to calculate area of an ellipse having its minor axes=7cm and major axes=10cm.

#include<stdio.h>
#define pi 3.14

int main()
{
	float minoraxes=7, majoraxes=10, area;
	area=pi*majoraxes*minoraxes;
	printf("The area of an ellipse is %.2f", area);
	return 0;
}
