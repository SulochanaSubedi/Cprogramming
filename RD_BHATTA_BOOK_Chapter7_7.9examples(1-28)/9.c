#include<stdio.h>

fcatorial();

long factorial(int x)
{
	int i, fact=1;
	for(i=1; i<=x; i++)
	fact*=i;
	return fact;
}

int main()
{
	long f1, f2, perm;
	int n, r;
	printf("\nEnter n and r:\n");
	scanf("%d%d", &n, &r);
	f1=factorial(n);
	f2=factorial(n-r);
	perm=f1/f2;
	printf("\nThe permutation value is %d", perm);
	return 0;
}
