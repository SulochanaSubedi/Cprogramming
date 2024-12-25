//Write a program to swap two variables values without using third varaiables.

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("Before swapping: a=%d and b=%d\n",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After swapping: a=%d and b=%d",a,b);
	return 0;
}
