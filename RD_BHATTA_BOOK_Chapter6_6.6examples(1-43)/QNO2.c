#include<stdio.h>

int main()
{
	char c;
	printf("\nEnter a character:\n");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("\nThe character is in uppercase.");
		c+=32;
		printf("\nThe equivalent lowercase character is %c",c);
	}
	else if(c>=97&&c<=122)
	{
		printf("\nThe character is in lowercase. ");
		c-=32;
		printf("\nThe equivalent uppercae character is %c", c);
	}
	else
	printf("\nInvalid input!!!!!");
	returrn 0;
}
