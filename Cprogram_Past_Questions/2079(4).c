#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, j, x;
	float sum=1.0;
	printf("Enter how many terms:\n");
	scanf("%d", &n);
	printf("Enter the value of x:\n");
	scanf("%d", &x);
	for(i=1; i<=(n-1); i++)
	{
		float fact=1.0;
		for(j=1; j<=i; j++)
		{
			fact*=j;
		}
		sum+=((pow(x,i))/fact);
	}
	printf("The required sum is %f", sum);
	return 0;
}
