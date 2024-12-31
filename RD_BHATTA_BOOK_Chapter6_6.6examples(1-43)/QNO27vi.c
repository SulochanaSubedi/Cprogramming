//Q.27vi

#include<stdio.h>

int main()
{
	int n;
	float sum=0.0, a,i;
	printf("\nEnter n:\t");
	scanf("%d", &n);
	for(i=1.0; i<=n; i++)
	{
		a=i/(i+1);
		sum+=a;
	}
	printf("\nThe sum is: \t%.2f", sum);
	getch();
	return 0;
}
