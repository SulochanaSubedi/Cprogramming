#include<stdio.h>

float ConvertToFah(float centi)
{
	float fah;
	fah=9.0/5*centi+32;
	return fah;
}

int main()
{
	float c, f;
	printf("Enter Temperature in Centigrade:");
	scanf("%f", &c);
	f=ConvertToFah(c);
	printf("The Equivalent Temperature in Fahrenheit is: %.2f",f);
	return 0;
}
