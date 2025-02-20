#include<stdio.h>

int getFibTerm(int n)
{
	int c, first=0, second=1, next;
	for(c=0;c<n; c++)
	{
		if(c<=1)
		next=c;
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
	}
	return next;
}

int main(void)
{
	int not, term;
	printf("Which term do you want to display?");
	scanf("%d", &not);
	term=getFibTerm(not);
	printf("%d th term is: %d", not, term);
	return 0;
}
