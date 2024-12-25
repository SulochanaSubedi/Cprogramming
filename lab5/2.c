//Write a program to find HCF and LCM of two numbers.

#include<stdio.h>

int main()
{
	int a,b,c,d,gcd,lcm,temp;
	printf("Enter two numbers:\n");
	scanf("%d%d", &c,&d);
	a=c;
	b=d;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	lcm=(c*d)/gcd;
	printf("The HCF is %d\n",gcd);
	printf("The LCM is %d",lcm);
	return 0;
}
