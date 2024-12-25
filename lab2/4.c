//Write a program to calculate simple and compund interest.

#include<stdio.h>
#include<math.h>

int main()
{
	float p,t,r,si,ci;
	printf("Enter principal, time and rate:\n");
	scanf("%f%f%f",&p, &t, &r);
	si=(p*t*r)/100;
	ci=(pow(((r/100)+1),t)*p)-p;
	printf("The simple and compound intrest are %.2f and %.2f",si,ci);
	return 0;
}
