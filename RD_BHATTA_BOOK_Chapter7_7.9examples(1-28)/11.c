#include<stdio.h>

int getSum(int);
int main()
{
	int n, sum;
	printf("Enter a number: ");
	scanf("%d", &n);
	sum=getSum(n);
	printf("Sum of even valued digits: %d", sum);
	return 0;
}

int getSum(int num)
{
	int sum=0, digit;
	do
	{
		digit=num%10;
		if(digit%2==0)
	    sum+=digit;
	    num=num/10;
	}while(num>0);
	return sum;
}
