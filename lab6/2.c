#include<stdio.h>
int sum(int);

int main()
{
	int n;
	printf("Enter the value of n:\n");
	scanf("%d", &n);
	int result=sum(n);
	printf("The sum is %d", result);
	return 0;
}

int sum(int n)
{
	if(n==0)
	return 0;
	else
	return(sum(n-1)+n);
}

/*
Output:
Enter the value of n:
50
The sum is 1275
*/
