//Q.27v

#include<stdio.h>

int main()
{
	int n, i;
	float sum=1, term=1,x;
	printf("\nEnter n and x:\t");
	scanf("%d%f", &n, &x);
	for(i=1; i<=n; i++)
	{
		term*=1/x;
		sum+=term;
	}
	printf("\nThe sum is: \t%f", sum);
	getch();
	return 0;
}
