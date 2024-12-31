#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,gcd,lcm,temp;
	printf("Enter two values to find gcd and lcm");
	scanf("%d %d",&c,&d);
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
	printf("\n gcd of %d and %d is %d",c,d,gcd);
	printf("\n lcm of %d and %d is %d",c,d,lcm);
	getch();
	return 0;
}
