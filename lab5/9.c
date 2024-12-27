//Write a program to find sum as Y of the folowing series: Y=1+(1/1!)+(2^2/2!)+(3^2/3!)+...+(10^2/10!).

#include<stdio.h>

int main()
{
	int i, j;
	float Y, sum=1.0;
	for(i=1; i<=10; i++)
	{
		float fact=1.0;
		for(j=1;j<=i;j++)
		{
			fact*=j;
		}
		sum+=((i*i)/fact);
  Y=sum;
	}
	printf("%f",Y);
	return 0;
}
