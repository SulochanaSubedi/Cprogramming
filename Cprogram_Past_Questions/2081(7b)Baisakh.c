#include<stdio.h>
int hcf(int a, int b)
{
	if(b!=0)
	return hcf(b, a%b);
	else
	return a;
}

int main()
{
	int a, b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("The HCF is %d", hcf(a, b));
	return 0;
}
