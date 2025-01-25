#include<stdio.h>

int main()
{
	int  n;
	float i=1, sum=0;
	printf("Enter nth term:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum+=1/(i*i);
	}
	printf("The sum is %f", sum);
	return 0;
}
