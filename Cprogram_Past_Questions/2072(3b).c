#include<stdio.h>

int main()
{
	int n, i, sum=0;
	printf("Enter a number to be checked:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum+=i;
		if(sum==n)
		{
			printf("The entered number is triangular in nature.");
		}
	}
	return 0;
}
