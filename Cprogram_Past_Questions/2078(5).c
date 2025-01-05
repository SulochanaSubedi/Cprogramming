#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, j, x;
	float cosx=1.0;
	printf("Enter how many terms:\n");
	scanf("%d", &n);
	printf("Enter the value of x:\n");
	scanf("%d", &x);
	for(i=1; i<=(n-1); i++)
	{
		float fact=1.0;
		for(j=1; j<=(2*i); j++)
		{
			fact*=j;
		}
		cosx+=(((pow(x,2*i))/fact)*pow(-1,i));
	}
	printf("The required series is %f", cosx);
	return 0;
}
