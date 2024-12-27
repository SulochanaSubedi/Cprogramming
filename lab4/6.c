// Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by 4 and divisible by 100 or 400.) 

#include<stdio.h>

int main()
{
	int year;
	printf("Enter a year:\n");
	scanf("%d", &year);
	
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		printf("It is leap year.");
	}
	else
	{
		printf("It is not a leap year.");
	}
	return 0;
}
