#include<stdio.h>

int fibo(int i)
{
	if(i==1)
	return 0;
	if(i== 2)
	return 1;
	if(i>=3)
	return(fibo(i-1)+fibo(i-2));
}

int main()
{
	int i, n;
	printf("Enter how many numbers:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d\t", fibo(i));
	}
	return 0;
}
