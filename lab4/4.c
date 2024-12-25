// Write a program to get input of two or higher digit integer number and display in reverse order. 

#include<stdio.h>

int main()
{
	int a,b,rev=0;
	printf("Enter a number with more than 2 or 2 digits:\n");
	scanf("%d", &a);
	while(a!=0)
	{
		b=a%10; 
		rev=rev*10+b; 
		a=a/10; 
	}
	printf("The reverse of given number is %d",rev);
	return 0;
}
