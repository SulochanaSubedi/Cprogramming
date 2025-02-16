#include<stdio.h>
int reverse(int );

int main()
{
	int n;
	printf("Enter a number to be reversed:\n");
	scanf("%d", &n);
	int result=reverse(n);
	printf("The reversed number is %d", result);
	return 0;
}

int reverse(int num)
{
	int r;
	while(num)
	{

		r=r*10+(num%10);
		num/=10;
	}
	return r;
}
