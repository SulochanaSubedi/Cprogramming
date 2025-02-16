#include<stdio.h>

int recur(int i)
{
	if(i==1)
	return 1;
	if(i>=2)
	return(recur(i-1)*10+1);
}
int main()
{
	int i, n;
	printf("Enter how many numbers:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d\n", recur(i));
	}
	return 0;
}
