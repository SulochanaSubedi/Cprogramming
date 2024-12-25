//Write a program to calculate sum of the following series: y=x+x^2+x^3+x^4+....+x^n.

#include<stdio.h>
#include<math.h>

int main()
{
	int y=0, x, n, i;
	printf("Upto how many terms?\n");
	scanf("%d",&n);
	printf("Enter the value of x\n");
	scanf("%d", &x);
	for(i=1;i<=n;i++)
	{
		y+=(pow(x,i));
	}
	printf("Y is %d", y);
	return 0;
}
