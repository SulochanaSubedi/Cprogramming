// Combination without using fuuntion

#include<stdio.h>

int main()
{
	long f1=1, f2=1, f3=1, comb;
	int i , n , c , r;
	printf("Enter n and r:\n");
	scanf("%d%d", &n, &r);
	for(i=1; i<=n; i++)
	f1*=i;
	for(i=1; i<=(n-r); i++)
	f2*=i;
	for(i=1; i<=r; i++)
	f3*=i;
	comb=f1/(f2*f3);
	printf("The required combination is %ld", comb);
	return 0;
}
