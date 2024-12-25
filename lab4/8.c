#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,r1,r2,discriminant;
	printf("Enter coefficients of x^2, x and constant in terms of a,b and c:\n");
	scanf("%d%d%d", &a,&b,&c);
	discriminant=(b*b)-(4*a*c);
	if(discriminant>=0)
	{
		r1=(-b+sqrt(discriminant))/(2*a);
		r2=(-b-sqrt(discriminant))/(2*a);
		printf("The roots are: %d, %d",r1,r2);
	}
	else
	{
		printf("The roots are imaginary.");
	}
	return 0;
}
