#include<stdio.h>
int fact(int);

int main()
{
	int n, r;
	printf("Enter the value of n and r:\n");
	scanf("%d%d", &n, &r);
	int permut=fact(n)/fact(n-r);
	int comb=permut/fact(r);
	printf("The permutation and combination are %d and %d", permut, comb);
	return 0;
}

int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return(fact(n-1)*n);
}

/*
Output:
Enter the value of n and r:
6 5
The permutation and combination are 720 and 6
*/
