//Combination using function

#include<stdio.h>

long factorial(int n)
{
	long fact=1;
	int i;
	for(i=1; i<=n; i++)
	fact*=i;
	return(fact);
}

int main()
{
	long f1=1, f2=1, f3=1, comb;
	int n, r;
	printf("Enter n and r:\n");
	scanf("%d%d", &n, &r);
	f1=factorial(n);
	f2=factorial(n-r);
	f3=factorial(r);
	comb=f1/(f2*f3);
	printf("The required combination is %ld", comb);
	return 0;
}


