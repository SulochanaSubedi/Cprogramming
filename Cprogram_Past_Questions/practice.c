#include<stdio.h>
int hcf(int a, int b);

int main()
{
	int a,b; 
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("The required hcf is %d", hcf(a, b));
	return 0;
}

int hcf(int a, int b)
{
	if(b!=0)
	return  hcf(b, a%b);
	else
	return a;
}
