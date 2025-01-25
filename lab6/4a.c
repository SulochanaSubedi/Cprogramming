#include<stdio.h>
int fibo(int);

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

int fibo(int i)
{
	if(i==1)
	return 0;
	else if(i==2)
	return 1;
	else
	return(fibo(i-1)+fibo(i-2));
}

/*
Output:
Enter how many numbers:
10
0       1       1       2       3       5       8       13      21      34
*/
