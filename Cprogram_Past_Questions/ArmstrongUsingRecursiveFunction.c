#include<stdio.h>
int armstrong(int);

int main()
{
	int check, num;
	printf("Enter a number to be checked:\n");
	scanf("%d", &num);
	check=armstrong(num);
	if(check==num)
	{
		printf("The given number is Armstrong.\n");
	}
	else
	{
		printf("The given number is not Armstrong.\n");
	}
	return 0;
}

int armstrong(int n)
{
	if(n==0)
	return 0;
	int digit=n%10;
	return(digit*digit*digit)+armstrong(n/10);
}
