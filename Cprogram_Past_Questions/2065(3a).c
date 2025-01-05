#include<stdio.h>

int main()
{
	int i, j, sum=0, n, a;
	printf("Enter how many terms:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++ )
	{
		if(i%2==0)
		a=-1;
		else 
		a=1;
		sum+=((i*i)*a);
	}
	printf("The required sum is %d", sum);
	return 0;
}
