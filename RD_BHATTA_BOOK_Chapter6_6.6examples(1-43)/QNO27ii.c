//Q.27ii

#include<stdio.h>

int main()
{
	int n, sum=0, i, term;
	printf("\nEnter n:\t");
	scanf("%d", &n);
	for(i=1, term=2; i<=n; i++, term+=2)
	{
		sum+=term;
	}
	printf("\nThe sum is: \t%d", sum);
	getch();
	return 0;
}
