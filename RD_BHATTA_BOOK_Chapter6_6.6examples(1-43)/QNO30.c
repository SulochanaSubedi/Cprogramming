//Q.30

#include<stdio.h>

int main()
{
	long n, num, rev=0;
	int digit;
	printf("\nEnter a num to be checked:\t");
	scanf("%d", &num);
	n=num;
	do
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}while(num!=0);
	if(n==rev)
	printf("\n The number is a palindrome");
	else
	printf("\n The number is not a palindrome");
	getch();
	return 0;
}
