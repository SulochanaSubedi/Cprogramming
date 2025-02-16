#include<stdio.h>

struct complex
{
	float x, y;
}c1, c2, p;

int main()
{
	printf("Enter the value of x and y for first complex number:\n");
	scanf("%f%f", &c1.x, &c1.y);
	printf("Enter the value of x and y for second complex number:\n");
	scanf("%f%f", &c2.x, &c2.y);
    p.x=c1.x*c2.x-c1.y*c2.y;
	p.y=c1.x*c2.y+c2.x*c1.y;
	printf("Thus the required complex number is %.2f + i %.2f", p.x, p.y);
	return 0;	
}
